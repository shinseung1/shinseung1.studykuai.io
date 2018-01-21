
<%@ page contentType="text/html; charset=UTF-8" %>
 
<!DOCTYPE html>
<html lang="ko">
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<link href="./style.css" rel='Stylesheet' type='text/css'>
</head>
<body>
<DIV class='container'>
<jsp:include page="./menu/top.jsp" flush='false' />
<DIV class='content'>
  <DIV style='width: 30%; background-color: #EEEEFF; margin: 20px auto; font-size: 32px; text-align: center;'>
    영화와 여행 이야기
  </DIV>
  
  <TABLE style='width: 30%; margin: 30px auto; border-collapse: collapse;'>
   <tr>
      <td style='width: 50%;'><img src='./menu/images/sw02.jpg' style='width: 100%; display: block;'></td>
      <td style='width: 50%;'><img src='./menu/images/sw01.jpg' style='width: 100%; display: block;'></td>
    </tr>
    <tr>
      <td style='width: 50%;'><img src='./menu/images/sw03.jpg' style='width: 100%; display: block;'></td>
      <td style='width: 50%;'><img src='./menu/images/sw04.jpg'  style='width: 100%; display: block;'></td>
    </tr>
  </TABLE>
 
</DIV> <!-- content END -->
<jsp:include page="./menu/bottom.jsp" flush='false' />
</DIV> <!-- container END -->
 
</body>
</html>