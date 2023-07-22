<!DOCTYPE html>
<html>
<head>
  <title>JavaScript Features Showcase</title>
  <style>
    /* CSS styles for the page */
    body {
      font-family: Arial, sans-serif;
      margin: 0;
      padding: 20px;
    }
    
    h1 {
      text-align: center;
    }
    
    .dropdown {
      position: relative;
      display: inline-block;
    }
    
    .dropdown-content {
      display: none;
      position: absolute;
      background-color: #f9f9f9;
      min-width: 160px;
      box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
      padding: 12px 16px;
      z-index: 1;
    }
    
    .dropdown:hover .dropdown-content {
      display: block;
    }
  </style>
</head>
<body>
  <h1>JavaScript Features Showcase</h1>
  
  <h2>Dropdown Example</h2>
  <div class="dropdown">
    <button>Click me</button>
    <div class="dropdown-content">
      <p>Dropdown item 1</p>
      <p>Dropdown item 2</p>
      <p>Dropdown item 3</p>
    </div>
  </div>
  
  <h2>Information Display Example</h2>
  <button onclick="displayInfo()">Show Information</button>
  <p id="info" style="display: none;">This is some hidden information that will be displayed when the button is clicked.</p>
  
  <script>
    // JavaScript code for displaying information
    function displayInfo() {
      var info = document.getElementById("info");
      info.style.display = "block";
    }
  </script>
</body>
</html>
