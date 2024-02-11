<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
  <title>bootstrap containers</title>
  <style>
      div{
      width:100%;
      height:100%;
      border:5px solid green;
      margin:10px;
      padding:30px;
      text-align:center;
      background-color:skyblue;
     }
   </style>
</head>
<body>
  <div class="container-fluid">
    <p style="font-size:25px";>This is fluid container</p>
    <p>Full width box and will stretch the layout to fit the entire width of the browser window</p>
  </div>
  <div class="container">
    <p style="font-size:25px";>This is default container</p>
    <p>Fixed width based on the size of device's viewport</p>
  </div>
 <div class="container-xs">100% wide until extra small breakpoint, width<544px</div> 
 <div class="container-sm">100% wide until small breakpoint, width>544px</div>
 <div class="container-md">100% wide until medium breakpoint, width>768px</div>
 <div class="container-lg">100% wide until large breakpoint, width>992px</div>
 <div class="container-xl">100% wide until extra large breakpoint, width>1140px</div>
 <div class="container-xxl">100% wide until extra extra large breakpoint, width>1320px</div>
</script>
 <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.min.js" integrity="sha384-BBtl+eGJRgqQAUMxJ7pMwbEyER4l1g+O15P+16Ep7Q9Q+zqX6gSbd85u4mG4QzX+" crossorigin="anonymous"></script>
 <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL" crossorigin="anonymous"></script>
 <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.8/dist/umd/popper.min.js" integrity="sha384-I7E8VVD/ismYTF4hNIPjVp/Zjvgyol6VFvRkX/vR+Vc4jQkC+hVqc2pM8ODewa9r" crossorigin="anonymous"></script>
</body>
</html>