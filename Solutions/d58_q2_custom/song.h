#ifndef __SONG_H__
#define __SONG_H__

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "priority_queue.h"

using namespace std;

class Song {
  public:
    std::string artist,title;
    int count;

    Song() { }
    Song(const Song &s) : artist(s.artist), title(s.title), count(s.count) { }
    Song(std::string artist,std::string title,int count) :  artist(artist), title(title), count(count) { }

    friend std::ostream& operator<<(std::ostream &out,const Song &s) {
      return out << "Artist: " << s.artist << " Title: " << s.title << " count: " << s.count;
    }
};

class Compare1 {
public:
  bool operator() (const Song &l, const Song &r) const {
    if (l.artist != r.artist) {
      return l.artist > r.artist;
    }
    return l.title > r.title;
  }
};

class Compare2 {
public:
  bool operator() (const Song &l ,const Song &r) const {
    if (l.count != r.count) {
      return l.count < r.count;
    }
    if (l.artist != r.artist) {
      return l.artist > r.artist;
    }
    return l.title > r.title;
  }
};

CP::priority_queue<Song, Compare1> pq1;
CP::priority_queue<Song, Compare2> pq2;

#endif
