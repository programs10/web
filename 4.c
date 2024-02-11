<!DOCTYPE html>
<html>
<head>
<title>FORMS</title>
 <style>
 *{
   font-family:"Calibri";
  }
header{
       background-color:black;
       color:white;
      }
 h2{
    font-size:25px;
   }
.a{
    font-weight:700;
    font-size:18px;
  }
button{
       background-color:black;
       color:white;
       border-radius:10px;
      }
table{
      border-collapse:collapse;
      border:solid 1pt black;
      }
  td{
      border:solid 1pt black;
      align:left;
     }
  th{
      border:solid 1pt black;
      align:center;
      font-size:17px;
    }
</style>
</head>
<body bgcolor="white">
  <header align="center">
  <h2><b>SRI SIDDHARTHA INSTITUTE OF TECHNOLOGY</b></h2>
  <h2><b>Registration Form</b></h2>
  </header>
  <marquee><b>Fill the form</b></marquee><hr color="grey">
  <form class="a" align="center">
  First name : <input type="text" name="First name" placeholder="Prince">
  <br><br>
  Middle name : <input type="text" name="Middle name" placeholder="Henry">
  <br><br>
  Last name : <input type="text" name="Last name" placeholder="Junior">
  <br><br>
  USN : <input type="text" name="USN" placeholder="21CS097">
  Year & Section : <select name="Drop down">
	  <option value="1A" Selected> 1A </option>
	  <option value="1A" Selected> 1B </option>
	  <option value="1A" Selected> 2A </option>
	  <option value="1A" Selected> 2B </option>
	  <option value="1A" Selected> 3A </option>
	  <option value="1A" Selected> 3B </option>
	  <option value="1A" Selected> 4A </option>
	  <option value="1A" Selected> 4B </option>
	</select>
	<br><br>
  DOB : <input type="date"><br>
  <hr color="grey">
  </form>
 <table align="center" width="70%">
  <tr>
   <th colspan="3">Open elective subjects</th>
  </tr>
 <tr>
   <th>Subject</th>
   <th>Credits</th>
   <th>Max.seats</th>
 </tr>
 <tr>
  <td><input type="radio" name="Subject" value="Graph theory and it's applications">Graph theory and it's applications</td>
  <td>3</td>
  <td>120</td>
 </tr>
 <tr>
  <td><input type="radio" name="Subject" value="Air pollution and it's control">Air pollution and it's control</td>
  <td>3</td>
  <td>120</td>
 </tr>
 <tr>
  <td><input type="radio" name="Subject" value="Project Management">Project Management</td>
  <td>3</td>
  <td>120</td>
 </tr>
 <tr>
  <th colspan="3">Professional elective subjects</th>
 </tr>
 <tr>
   <th>Subject</th>
   <th>Credits</th>
   <th>Max.seats</th>
 </tr>
 <tr>
  <td><input type="radio" name="Subject" value="Data structures and algorithms">Data structures and algorithms</td>
  <td>3</td>
  <td>120</td>
 </tr>
 <tr>
  <td><input type="radio" name="Subject" value="Unix Programming">Unix Programming</td>
  <td>3</td>
  <td>120</td>
 </tr>
 <tr>
  <td><input type="radio" name="Subject" value="Digital image processing">Digital image processing</td>
  <td>3</td>
  <td>120</td>
 </tr>
  <th colspan="3">Other subjects</th>
 </tr>
 <tr>
   <th>Subject</th>
   <th>Credits</th>
   <th>Max.seats</th>
 </tr>
 <tr>
  <td><input type="Checkbox" name="Web Technologies" value="on">Web Technologies</td>
  <td>3</td>
  <td>120</td>
 </tr>
 <tr>
  <td><input type="Checkbox" name="Data Communication" value="on">Data Communication</td>
  <td>3</td>
  <td>120</td>
 </tr>
</table><hr color="grey">
<form align="center">
<textarea rows="5" cols="50" name="description" placeholder="Enter your review here"></textarea><br>
<button>submit</button>
</form>
</body>
</html>

