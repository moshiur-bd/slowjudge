<html>
<head></head>
<body>
	<div id='body'>
	
	<?php
		include(__DIR__ ."\\..\\header.php");
		include(__DIR__ ."\\..\\connection.php");
		include("toolbar.php");
		
		include("sidebar.php");
		echo "<div id='content' >\n";
		//include("toolbar.php");
		
		$conid=$_GET['conid'];
		$cDB=$pre.$conid;
		
		$sql="SELECT `pid` FROM `$cDB`.`problem` ORDER BY `cpid` ASC";
		$respid=mysqli_query($conn,$sql);
		
		
		$ltr='A';
		
		
		echo "<div id='dash' class='dash'>
				<table class='dash'>";
		echo "<tr class='dash' > 
				<th class='dash ltr'> # </th> 
				<th class='dash prb'> Edit Problem </th>
				<th class='dash ds'> Edit Dataset </th>
				<th class='dash ml'> Rejudge </th>  
				</tr>";
	
		$cpid=0;
		while($row=mysqli_fetch_array($respid))
		{
			$pid=$row['pid'];
			$sql="SELECT * FROM `$DB`.`problem` WHERE `pid`='$pid'";
			$result=mysqli_query($conn,$sql);
			if(!$data=mysqli_fetch_array($result))
				die("Problem info fetching failed!");
			$pname=$data['name'];
			$tl=$data['tl'];
			$ml=$data['ml'];
			$slcnt=0; //implemet asap
			echo "<tr class='dash' >
					<td class='dash ltr'> $ltr </td>    
					<td class='dash'> <a href='problemEditor.php?conid=$conid&pid=$pid'> $pname</a> </td> 
					<td class='dash dataset'> <a href='datasetSingle.php?conid=$conid&pid=$pid' >Edit dataset</a> </td> 
					<td class='dash rejudge'> <a href='rejudge.php?conid=$conid&pid=$pid&cpid=$cpid'>Rejudge</a> </td> 
				</tr>";
			$ltr++;
			$cpid++;
		}
		echo "</table></div>";
		
		
		echo "</div>";
	
	?>


	</div>
	
</body>
</html>