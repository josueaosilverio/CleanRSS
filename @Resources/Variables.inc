
[Variables]
W=390
H=30

;RSS Variables

rssURL=http://www.horriblesubs.info/rss.php?res=1080
Item=(?(?=.*<item>).*<item>.*<title>(.*)</title>.*<link>(.*)</link>.*<pubDate>(.*)</pubDate>)
Sub="^\s+":"","<!\[CDATA\[":"","\]\]>":"","!\[CDATA\[":"","\]\]":"","\[HorribleSubs\]":"","\[1080p\]\.mkv":""

;Font Styles
FontFace=Futura LT
FontSize=11
TitleSize=20
TitleH=30 ;Should be TitleSize+10
FontColor=255,255,255,255