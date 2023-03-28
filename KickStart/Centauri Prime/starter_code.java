import java.util.*;

public class Solution {

  private static String getRuler(String kingdom) {
    // TODO: implement this method to determine the ruler name, given the kingdom.
    String ruler = "";
    if(kingdom.endsWith("a") ||kingdom.endsWith("e") || kingdom.endsWith("i")
    || kingdom.endsWith("o") || kingdom.endsWith("u") || kingdom.endsWith("A")||kingdom.endsWith("E") ||kingdom.endsWith("I")||kingdom.endsWith("O")||kingdom.endsWith("U"))
    ruler="Alice";
    else if(kingdom.endsWith("y") || kingdom.endsWith("Y") )
    ruler="nobody";
    else 
    ruler="Bob";
    return ruler;
  }

  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int T = in.nextInt();

      for (int t = 1; t <= T; ++t) {
        String kingdom = in.next();
        System.out.println(
            "Case #" + t + ": " + kingdom + " is ruled by " + getRuler(kingdom) + ".");
      }
    }
  }
}
