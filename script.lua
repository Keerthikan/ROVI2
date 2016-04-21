wc = rws.getRobWorkStudio():getWorkCell() state = wc:getDefaultState()
device = wc:findDevice("UR1")


function setQ(q)
	qq = rw.Q(#q,q[1],q[2],q[3],q[4],q[5],q[6]) 	
    device:setQ(qq,state) 			    
	os.execute("sleep " .. tonumber(1)) 
end

setQ{-3.142, -0.827, -3.002, -3.143, 0.099, -1.573}
