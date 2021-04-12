BEGIN{
	FS=","
	numofrows=800
}
/Bug/ && bugPower < $5{
	bugPower = $5
	bugName =$2
}	


END{
	print bugName
	}

