<html>
<head></head>
<body>
<div id='body'>


<?php
	include(__DIR__ ."\\..\\header.php");
	include(__DIR__ ."\\..\\connection.php");
	include("isManager.php");
	include("signals.php");
	include("../functions.php");
		
	$sql="SELECT * FROM `$DB`.`contest` ORDER BY `start` DESC";
	$result=mysqli_query($conn,$sql);

	echo "<div id='conls'>";
	echo "<table class='conlist' cellspacing='0'>";
	
	echo "<tr class='conlist'> <th class='conlist cls-name'>Name of The Contest</th>
		<th class='conlist cls-uname'>Owner</th>
		<th class='conlist cls-start'>start</th>
		<th class='conlist cls-start'>duration</th>
		<th class='conlist cls-status '>status</th>
		<th class='conlist cls-in'>edit</th> 
		</tr>\n";
	while($row=mysqli_fetch_array($result))
	{
		$conid=$row['id'];
		$cDB=$pre.$conid;
		$name=$row['name'];
		$start=$row['start'];
		$owner=$row['uid'];
		
		$resx=mysqli_fetch_array(mysqli_query($conn,"SELECT `status`,`duration`	FROM `$cDB`.`settings`"));
		$constatus=$resx['status'];
		$duration=$resx['duration'];
		$colstatus=getColorByConStatus($constatus);
		
		echo "<tr class='conlist'> <td class='conlist cls-name'>".htmlentities($name)."</td>
		<td class='conlist cls-uname'>".getProfileById($owner)."</td>
		
		<td class='conlist cls-start'> <a href='setTimes.php?conid=$conid'>".printDateLocal($start)."</a></td>
		<td class='conlist cls-start'> <a href='setTimes.php?conid=$conid'>".printContestDuration($duration)."</a></td>
		<td class='conlist cls-status $colstatus'>  $constatus </td>
		<td class='conlist cls-in'><a href='dashman.php?conid=$conid' >edit</a></td> 
		</tr>\n";
		
	}
	echo "</table>";
	echo "<div id='addCon'><input type='button' value='+' onclick='addCon();'></div>";
	echo "</div>";
	
?>
<script>
function addCon(){
	var h="<div id='conname'> <form action='addCon.php' method='post'>		<input  name='name' placeholder='Name of The contest' type='text' pattern='.{5,100}' title='minimum 5 character long!' autocomplete='off'>		<input name='submit' type='submit' value='Add'>	</form>	</div>";
	document.getElementById("addCon").innerHTML=h;
	
}

</script>
</div>

</body>
</html>

