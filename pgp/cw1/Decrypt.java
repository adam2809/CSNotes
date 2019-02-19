public class Decrypt{
  public static void main(String[] args){
    if(args.length < 2){
      System.out.println("Usage: decrypt.java <word> <password>");
      System.out.println("Cannot decrypt without supplying both a word and a password!");
      System.exit(1);
    }
    StringBuffer messageCopy = new StringBuffer(args[0]);
    decrypt(messageCopy, args[1]);
    System.out.printf("Decrypted word is: '%s'\n", messageCopy);
  }
  public static void decrypt(StringBuffer message, String password){
    int m = 0;
    int p = 0;
    while(m < message.length()){
      message.setCharAt(m,(char)(65 + (50 + (message.charAt(m) & 0x9F) - (password.charAt(p) & 0x9F)) % 26));
      m++;
      p++;
      if(p == password.length()){
        p = 0;
      }
    }
  }
}
