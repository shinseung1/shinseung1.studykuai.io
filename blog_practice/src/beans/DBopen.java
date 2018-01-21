package beans;

import java.sql.Connection;
import java.sql.DriverManager;

public class DBopen {
  public Connection getConnection() {
    Connection con = null;
    
    String className = "org.gjt.mm.mysql.Driver"; // MySQL ¿¬°á Drvier 
    String url = "jdbc:mysql://localhost:3306/javadb?useUnicode=true&characterEncoding=euckr"; 
    String user = "root"; 
    String pass = "1234";
    
    try {
    Class.forName(className);
    con = DriverManager.getConnection(url,user,pass);
    
    }catch(Exception e) {
      e.printStackTrace();
    }
    
    return con;
  }
  

}
