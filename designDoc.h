//This file is for documentation purposes only. It will be ignored by the compiler.
//Our Teaching Assistant will manually grade this file.

//Please make sure that you include the entire content of this file as comments.

/* Design Doc: communicate your thought process in English.
 
0. List of members who contributed to the implementation of this project:
   
   GROUP MEMBERS: Andy Almeida, Kao Saephan, Nicholas Valencia, Umaran Ahmadzai, Shanil Prasad
 
1. Describe your algorithm for the sentenceSplitter( ) function in pseudocode.
   void sentenceSplitter (string& fname, vector<string>& sentences) {
     read in file
     add all contents of file to string
      //tokenize sentences by delimiters period, question mark, period + endquotes, questionmark + endquotes, newline char ".", "?", "."", "$" 
      while (not end of fname) {
         tokenize sentences by delimiters
         sentences.push_back(tokenSentences)
      }


2. Describe your algorithm for the wordpairMapping( ) function in pseudocode.
   void wordpairMapping (vector<string>& sentences, map<pair<string,string>, int>& wordpairFreq_map) {
      for(iterate over sentences){
         
         make all characters lowercase
         tokenize sentence into words
         sort words in alphabetical order
         create unique set of words
         
         for(iterate over unique sets of words){ //first word
            for(iterate over unique sets of words){ //second word
               if(pair isn't the same word twice){
                  add first word and second word as pair to pair set
               }
            }
         }
         
         for(iterate over pair set){
            if(pair isn't in the map){
               add the pair to map
            }
            else{ //pair is in the map
               update count
            }
         }
   }

   //THESE NEXT TWO IS ONLY FOR OUR GROUP AND IS NOT PART OF THE DESIGN DOC REQUIREMENT
   //REPEAT THESE NEXT 2 ARE NOT PART OF THE ASSIGNMENT 

   3. freqWordpairMmap(map< pair<string,string>, int> &wordpairFreq_map, multimap<int, pair<string, string> > &freqWordpair_mmap ) {
         //flip pair and count in one loop

         for (each index in wordpairFreq_map) {
            //first part of a map is the "key" and the second part is the "value"
            //we can update the value but not the key. changing the key requires removal and insertion
            get the int value and pair then insert into freqwordPair_map with int as the key and pair as the value 
         }
      }

   4. void printWordpairs(multimap<int, pair<string, string> > &freqWordpair_multimap, string outFname, int topCnt, int botCnt) {
         //all words are already in ascending order
         use multimap's iterator to print least occurance
         use multimap's reverse iterator to print most occurance 
      }   
   

*/
