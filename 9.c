import java.sql.*;
import java.util.*;
class nine {
   public static void main(String[] args) {
      try {
            Class.forName("com.mysql.cj.jdbc.Driver");
     Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/cse", "root", "rani");
      System.out.println("Connection is created successfully:");
     Statement stmt = conn.createStatement();
   String query1 = "create table lab(id int(4) primary key,name varchar(15),salary int(6))";
stmt.executeUpdate(query1);
System.out.println("table created");
System.out.println("inserting values into table");
query1 = "INSERT INTO lab VALUES (1, 'John', 34000)";
      stmt.executeUpdate(query1);
      query1 = "INSERT INTO lab VALUES (2, 'Carol', 42000)";
      stmt.executeUpdate(query1);
      query1 = "INSERT INTO lab VALUES (3, 'Omar', 45000)";
      stmt.executeUpdate(query1);
      System.out.println("Record is inserted in the table successfully \n");
      ResultSet rs=stmt.executeQuery("Select * from lab");
      while(rs.next())
      System.out.println(+rs.getInt(1)+" "+rs.getString(2)+" "+rs.getInt(3));
      conn.close();
      } 
catch (SQLException e) {
         e.printStackTrace();
      }
      catch (Exception e)
      {
         e.printStackTrace();
      }
   }
}