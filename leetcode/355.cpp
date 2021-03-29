class Twitter {
public:
    /** Initialize your data structure here. */
    Twitter() {
        followedMap.clear();
        tweetList.clear();
    }

    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        tweetList.emplace_back(userId, tweetId);
    }

    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        vector<int> result;
        unordered_set<int> followed = followedMap[userId];
        for (int i=tweetList.size()-1;i>=0;i--)
        {
            int& pUserId=tweetList[i].first;
            int& tw=tweetList[i].second;
            if (userId==pUserId or followed.find(pUserId)!=followed.end()) result.emplace_back(tw);
            if (result.size()==10) break;
        }
        return result;
    }

    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        followedMap[followerId].insert(followeeId);
    }

    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        if (followedMap[followerId].find(followeeId)!=followedMap[followerId].end())
            followedMap[followerId].erase(followeeId);
    }

private:
    unordered_map<int, unordered_set<int>> followedMap;
    vector<pair<int,int>> tweetList;
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
