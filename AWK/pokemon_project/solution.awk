BEGIN{
	FS=","
	numrows = 800
}

mostPower < $5{
	mostPower = $5+0
	name = $2
	next
}

{sumTotal += $5}
{sumHP += $6}
{sumAttack += $7}
{sumDefense += $8}
{sumSPA += $9}
{sumSPD += $10}
{sumSpeed+= $11}

/Bug/ {numbug +=1} 
/Bug/ {totalBugStats += $5}
/Bug/&& powerBug <$5{
	powerBug = $5
	bugName = $2
}

/Dark/ {numDark +=1}
/Dark/ {totalDarkStats += $5}
/Dark/ && powerDark <$5{
	powerDark = $5
	darkName = $2
}

/Dragon/ {numDrag +=1}
/Dragon/ {totalDragStats += $5}
/Dragon/ && powerDragon <$5{
	powerDragon = $5
	dragName = $2
}

/Electric/ {numElectric += 1}
/Electric/ {totalElectricStats += $5}
/Electric/ && powerElectric <$5{
	powerElectric = $5
	electricName = $2

}

/Fairy/ {numFairy +=1}
/Fairy/ {totalFairyStats += $5}
/Fairy/ && powerFairy <$5{
	powerFairy = $5
	fairyName = $2
}

/Fighting/ {numFight += 1}
/Fighting/ {totalFightStats += $5}
/Fighting/ && powerFight < $5{
	powerFight = $5
	fightName = $2
}

/Fire/ {numFire += 1}
/Fire/ {totalFireStats += $5}
/Fire/ && powerFire < $5{
	powerFire = $5
	fireName = $2
}

/Flying/ {numFly +=1}
/Flying/ {totalFlyStats += $5}
/Flying/ && powerFly < $5{
	powerFly = $5
	flyName =$2
}

/Ghost/ {numGhost += 1}
/Ghost/ {totalGhostStats += $5}
/Ghost/ && powerGhost < $5{
	powerGhost = $5
	ghostName = $2
}

/Grass/ {numGrass += 1}
/Grass/ {totalGrassStats += $5}
/Grass/ && powerGrass < $5{
	powerGrass = $5
	grassName = $2
}

/Ground/ {numGround += 1}
/Ground/ {totalGroundStats += $5}
/Ground/ && powerGround < $5{
	powerGround = $5
	groundName = $2
}

/Ice/ {numIce += 1}
/Ice/ {totalIceStats += $5}
/Ice/ && powerIce < $5{
	powerIce = $5
	iceName = $2
}

/Normal/ {numNormal += 1}
/Normal/ {totalNormalStats += $5}
/Normal/ && powerNormal < $5{
	powerNormal = $5
	normalName = $2
}

/Poison/ {numPoison += 1}
/Poison/ {totalPoisonStats += $5}
/Poison/ && powerPoison < $5{
	powerPoison = $5
	poisonName = $2
}

/Psychic/ {numPsy += 1}
/Psychic/ {totalPsyStats += $5}
/Psychic/ && powerPsy < $5{
	powerPsy = $5
	psyName = $2
}

/Rock/ {numRock +=1}
/Rock/ {totalRockStats += $5}
/Rock/ && powerRock < $5{
	powerRock = $5
	rockName = $2
}

/Steel/ {numSteel += 1}
/Steel/ {totalSteelStats += $5}
/Steel/	&& powerSteel < $5{
	powerSteel = $5
	steelName = $2
}

/Water/ {numWater +=1}
/Water/	{totalWaterStats += $5}
/Water/ && powerWater < $5{
	powerWater = $5
	waterName = $2
}

/J|j/ {nameJ += 1}

END{
	print "The most powerful Pokemon is " name
	print "This Pokemon has an overall power of " mostPower "\n"

	print "The average for the total column is " sumTotal/numrows
	print "The average for the hp column is " sumHP/numrows
	print "The average for the Attack column is " sumAttack/numrows
	print "The average for the Defense column is " sumDefense/numrows
	print "The average for the Special Attack column is " sumSPA/numrows
	print "The average for the Special Defense column is " sumSPD/numrows
	print "The average for the Speed column is " sumSpeed/numrows "\n"

	print "Type: Most powerful Pokemon:  Average stats of type: "
	print "Bug- " bugName "\t\t " totalBugStats/numbug
	print "Dark- " darkName "\t " totalDarkStats/numDark
	print "Dragon- " dragName "\t " totalDragStats/numDrag
	print "Electric- " electricName "\t\t " totalElectricStats/numElectric
	print "Fairy- " fairyName "\t " totalFairyStats/numFairy
	print "Fire- " fireName "\t " totalFireStats/numFire
	print "Flying- " flyingName "\t\t\t " totalFlyStats/numFly
	print "Ghost- " ghostName "\t " totalGhostStats/numGhost
	print "Grass- " grassName "\t " totalGrassStats/numGrass
	print "Ground- " groundName "\t " totalGroundStats/numGround
	print "Ice- " iceName "\t\t " totalIceStats/numIce
	print "Normal- " normalName "\t\t\t " totalNormalStats/numNormal
	print "Poison- " poisonName "\t " totalPoisonStats/numPoison
	print "Psychic- " psyName "\t " totalPsyStats/numPsy
	print "Rock- " rockName "\t " totalRockStats/numRock
	print "Steel- " steelName "\t " totalSteelStats/numSteel
	print "Water- " waterName "\t " totalWaterStats/numWater
	print "\n"
	print "There are " nameJ " Pokemon with the letter j in their names "
}
