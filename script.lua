wc = rws.getRobWorkStudio():getWorkCell() state = wc:getDefaultState()
device = wc:findDevice("UR1")


function setQ(q)
	qq = rw.Q(#q,q[1],q[2],q[3],q[4],q[5],q[6]) 	
    device:setQ(qq,state) 		
	rws.getRobWorkStudio():setState(state) 	    
end

setQ{0, -1.57, 0, -1.57, 0, 0}
