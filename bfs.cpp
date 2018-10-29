void dfs(int s){
	vis[s] = true;
	stk[s] = true;
	for(auto i : adj[s]){
		if(!vis[i]){
			if(dfs(i))
				return true;
		}
		else if(stk[i])
			return true;
	}
	stk[s] = false;
	return false;
}