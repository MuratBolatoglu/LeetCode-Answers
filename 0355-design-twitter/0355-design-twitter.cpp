class Twitter {
public:
    Twitter() {
        time=1;
    }
    vector<int> getNewsFeed(int userId) {
        vector<int> ans;
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        set<int>::iterator it;
        follows[userId].insert(userId);
        for (it = follows[userId].begin(); it !=follows[userId].end(); it++){
            for(size_t i=0;i<tweets[*it].size();i++){
                pq.push(tweets[*it][i]);
                if(pq.size()>10) pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back((pq.top())[1]);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    void postTweet(int userId, int tweetId) { 
        follows[userId].insert(userId);
        tweets[userId].push_back({time,tweetId});
        time++;
    }
    void follow(int followerId, int followeeId) { follows[followerId].insert(followeeId); }

    void unfollow(int followerId, int followeeId) {
        if (followerId != followeeId) follows[followerId].erase(followeeId);     
    }

private:
    map<int,vector<vector<int>>> tweets;
    unordered_map<int,set<int>> follows;
    int time;
};
