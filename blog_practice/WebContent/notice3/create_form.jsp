<%@ page contentType="text/html; charset=UTF-8" %>
<%@ page import="java.text.DecimalFormat" %>
<%@ page import="java.util.Date" %>
<%@ page import="java.text.SimpleDateFormat" %>
 
<% 
request.setCharacterEncoding("utf-8"); 
 
DecimalFormat df = new DecimalFormat((char)65510 + " #,###,### " + (char)50896);
SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
String date = sdf.format(new Date());
%>
 
<!DOCTYPE html>
<html lang="ko">
<head>
<meta charset="UTF-8">
<title>공지사항</title>
<link href="../css/style.css" rel='Stylesheet' type='text/css'>
</head>
<body>
<DIV class='container'>
<jsp:include page="/menu/top.jsp" flush='false' />
<DIV class='content'>
 
  <form name='frm' action='./create_proc.jsp' method='POST'>
    <fieldset style='width: 70%; margin: 10px auto;'>
      <legend>공지사항 등록</legend>
      <ul>
        <li class='li_none'>
          <label for='title'>내용: </label>
          <input type='text' name='title' id='title' value='스타트랙 시즌1 open' style='width: 80%;'>
        </li>
        <li class='li_none'>
          <label for='rname'>성명: </label>
          <input type='text' name='rname' id='rname' value='관리자' style='width: 30%;'>
        </li>
      </ul>
    </fieldset>
    
    <DIV style='margin: 30px auto; text-align: center; background-color: #FFFFFF'>
      <button type='submit'>등록</button>
    </DIV>    
  </form>
 
</DIV> <!-- content END -->
<jsp:include page="/menu/bottom.jsp" flush='false' />
</DIV> <!-- container END -->
 
</body>
</html>