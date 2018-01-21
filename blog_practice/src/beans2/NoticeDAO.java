package beans2;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import beans2.NoticeVO;
import beans.DBClose;
import beans.DBopen;

public class NoticeDAO {

  Connection con = null; // DBMS ����
  PreparedStatement pstmt = null; // SQL ����
  ResultSet rs = null; // SELECT ����� ����
  StringBuffer sql = null; // SQL ����
  NoticeVO VO;
  int count = 0;
  
  DBopen dbopen = null;
  DBClose dbclose = null;
  
   public NoticeDAO() {
     dbopen = new DBopen();
     dbclose = new DBClose();
   }
   
   public int create(NoticeVO vo) {
     int count =0;
     try {
       con  = dbopen.getConnection();
       sql = new StringBuffer();
       sql.append(" INSERT INTO notice(title,rname,rdate)");
       sql.append(" VALUES(?,?,now())");
       
       pstmt = con.prepareStatement(sql.toString());
       pstmt.setString(1, vo.getTitle());
       pstmt.setString(2, vo.getRname());
       
       count = pstmt.executeUpdate();
       
     }catch(SQLException e) {
       e.printStackTrace();
     }finally {
       dbclose.close(con,pstmt);
     }
     return count;
   }


}
