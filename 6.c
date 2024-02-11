
<html>
 <head>
  <title>Validate Form</title>
 </head>
 <body> 
  <h2 align="center">User Login Validation</h2>
  <form id="form" align="center">
  <label for="name">Name</label><br>
  <input type="text" id="name" name="name"><br><br>

  <label for="email">Email</label><br>
  <input type="email" id="email" name="email"><br><br>

  <label for="password">Password</label><br>
  <input type="password" id="password" name="password"><br><br>

  <label for="confirmpassword">Confirm Password</label><br>
  <input type="password" id="confirmpassword" name="confirmpassword"><br><br>

  <input type="submit" value="submit" onclick="return validate()">

  <script>
   function validate(){
   var name=document.getElementById("name").value;
   var email=document.getElementById("email").value;
   var password=document.getElementById("password").value;
   var confirmpassword=document.getElementById("confirmpassword").value;
		
  if(name=="")
  {
   alert("Name must be filled out")
   return False;
  }
  if(email=="")
  {
   alert("email must be filled out")
   return False;
  }
  if(password!=confirmpassword)
  {
   alert("Password do not match")
   return False;
  }
  if(password=="")
  {
   alert("password must be filled out")
   return False;
  }
  return True;
 }
</script>
</body>
</html>
