<!Doctype html>
<html>
<head>
<style>
  div{
      width:100px;
      height:100px;
      border:1px;
      margin:10px;
      float:left;
      padding:30px;
      text-align:center;
      background-color:skyblue;
     }
  p{
    background-color:white;
   }
</style>
</head>
<body>
  <h3>These example demonstrates the difference between onmousemove, onmouseenter, onmouseover, onmouseleave, nonmouseout, onclick, ondoubleclick and onmousedown and up</h3>
  <p>onmousemove</p>
  <p>onmousenter</p>
  <p>onmouseover</p>
  <p>onmouseleave</p>
  <p>onmouseout</p>
  <p>onclick</p>
  <p>ondoubleclick</p>
  <p>onmouseup and down</p>
<div onmousemove="mymovefunction()">
 <p>onmousemove:<br><span id="demo">mouse over me!</span></p>
</div>
<div onmouseenter="myenterfunction()">
 <p>onmouseenter:<br><span id="demo2">mouse over me!</span></p>
</div>
<div onmouseover="myoverfunction()">
 <p>onmouseover:<br><span id="demo3">mouse over me!</span></p>
</div>
<div onmouseleave="myleavefunction()">
 <p>onmouseleave:<br><span id="demo4">mouse over me and leave!</span></p>
</div>
<div onmouseout="myoutfunction()">
 <p>onmouseout:<br><span id="demo5">mouse over me and out!</span></p>
</div>
<div>
 <p id="alex">Welcome to web technology lab</p>
 <button onclick="myclickfunction()">click me..</button>
</div>
<div>
 <p id="alex1">Welcome to web technology lab</p>
 <button ondblclick="mydoubleclickfunction()">double click me..</button>
</div>
<div>
  <p id="tab" onmousedown="mymousedownfunction()" onmouseup="mymouseupfunction()">onmouse down & up</p>
</div><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><hr color="grey">
<h3>Keyboard events</h3>
<p><b>onkeydown and keyupfunction</b></p>
<p>Press and hold down a key inside the text field to set a red background color. Release the key to set a green background color</p>
 <input type="text" id="key" onkeydown="KeydownFunction()" onkeyup="KeyupFunction()"><br><br>
<p><b>onkeypress</b></p>
 <input type="text" id="key1" onkeypress="KeypressFunction()">
					    
<script>
  var x=0;
  var y=0;
  var z=0;
  var p=0;
  var q=0;
 function mymovefunction()
 {
   document.getElementById("demo").innerHTML=z+=1;
 }
 function myenterfunction()
 {
   document.getElementById("demo2").innerHTML=x+=1;
 }
 function myoverfunction()
 {
   document.getElementById("demo3").innerHTML=y+=1;
 }
 function myleavefunction()
 {
   document.getElementById("demo4").innerHTML=p+=1;
 }
 function myoutfunction()
 {
   document.getElementById("demo5").innerHTML=q+=1;
 }
 function myclickfunction()
 {
   document.getElementById("alex").innerHTML="Paragraph changed";
 }
 function mydoubleclickfunction()
 {
   document.getElementById("alex1").innerHTML="Paragraph changed";
 }
 function mymousedownfunction()
 {
   document.getElementById("tab").style.backgroundColor="red";
 }
 function mymouseupfunction()
 {
   document.getElementById("tab").style.backgroundColor="green";
 } 
 function KeydownFunction()
 {
   document.getElementById("key").style.backgroundColor="red";
 }
 function KeyupFunction()
 {
   document.getElementById("key").style.backgroundColor="green";
 }	
 function KeypressFunction()
 {
   document.getElementById("key1").style.backgroundColor="red";
 }						
					
</script>
</body>
</html>