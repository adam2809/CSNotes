package pgp;

import java.io.IOException;

class MyFile extends PGPFile{
  public static void main(String[] args){
    MyFile myFileTest = new MyFile();
    PGPText sourceText = myFileTest.readEntireFile("source.txt");
    sourceText.addLine("Just a new line");
    myFileTest.writeEntireFile(sourceText, "dest.txt");
  }
  public PGPText readEntireFile(String sourceFilename){
    PGPText text = new PGPText();
    openReadFile(sourceFilename);
    while(true){
      String nextLine = readNextLine();
      if(nextLine == null){
        break;
      }
      text.addLine(nextLine);
    }
    closeReadFile();
    return text;
  }
  public void writeEntireFile(PGPText text, String destFilename){
    openWriteFile(destFilename);
    for(int i = 0;i < text.getLineCount();i++){
        writeLine(text.getLine(i));
    }
    closeWriteFile();
  }
}
