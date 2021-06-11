package UAS2;

import java.lang.reflect.*;

public class AssistantDecoder {
  private Field privateField;
  private Method privateMethod;
  private Assistant assist;
  private int salary;

  AssistantDecoder(Assistant assistant) {
    this.assist = assistant;
    this.salary = -99;
    try {

      privateField = Assistant.class.getDeclaredField("salary");

      privateField.setAccessible(true);

      privateMethod = Assistant.class.getDeclaredMethod("addPersonToRecommendations");

      privateMethod.setAccessible(true);

    } catch (Exception e) {
      e.printStackTrace();
    }
  }

  public void addPersonToRecommendations(String name) throws Exception {
    try {

      privateMethod.invoke(name);

    } catch (Exception e) {
      e.printStackTrace();
    }
  }

  public int getSalary() throws Exception {
    salary = (int) privateField.get(this.assist);

    if (salary < 0) {
      throw new Exception();
    }
    return salary;

  }
}
