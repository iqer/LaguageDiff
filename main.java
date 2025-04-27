public class main {

  public static void main(String[] args) {
    int height = 8;
    int length = 12;
    int width = 10;

    System.out.printf("height: %d, length: %d, width: %d\n", height, length, width);
    int volume = height * length * width;
    System.out.printf("volume: %d\n", volume);
    System.out.printf("weight: %d\n", (volume + 165) / 166);
  }
}
