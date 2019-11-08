import java.sql.*;

public class DatabaseConnect {

    public static void main(String args[]) {
        try {
            Class.forName("org.mariadb.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mariadb://192.40.1.12:3306/mysql", "username", "password");
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("select * from databasename.tablename");
            while (rs.next()) {
                System.out.println(rs.getString(1) + "  " + rs.getString(2) + "  " + rs.getString(3));
            }
            con.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
