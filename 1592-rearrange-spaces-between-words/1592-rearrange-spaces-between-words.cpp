class Solution {
public:
    string reorderSpaces(string text) {
        int n,i,j,count,word,totalletter;
        count = 0,word=0,totalletter=0;
        n = text.size();
        if(n == 1){
            return text;
        }
        bool letter;
        if(text[0] == ' '){
            letter = false;
            count++;
        }
        else{
            totalletter++;
            letter = true;
        }
        
        
        for(i=1;i<n;i++){
            if(text[i] == ' '){
                count++;
                if(letter == true){
                    letter = false;
                    word++;
                }
            }
            else{
                totalletter++;
                letter = true;
            }
        }
        
        if(letter == true){
            word++;
            letter = false;
        }
        
        int space,remaining;
        string answer;
        if(word == 1){
            for(i=0;i<n;i++){
                if(text[i] != ' '){
                    answer += text[i];
                }
            }
            
            j=0;
            while(j != count){
                answer += " ";
                j++;
            }
            return answer;
        }
        
        
        space = count/(word-1);
        remaining = count - (space*(word-1));
        
        i=0;
        j=0;
        int l;
        if(text[0] == ' '){
            l = 0;
            while(text[l] == ' '){
                l++;
            }
            letter = false;
        }
        else{
            l = 0;
            letter = true;
        }
        
        for(i=l;i<n;i++){
            if(text[i] == ' '){
                // letter = false;
                
                int k = 0;
                while(k != space){
                    answer += " ";
                    k++;
                }
                
                l = i;
                while(text[l] == ' '){
                    l++;
                }
                
                i=l-1;   
            }
            else{
                j++;
                // letter = true;
                answer += text[i];
            }
            if(j == totalletter){
                break;
            }
        }
        
        j=0;
        while(j != remaining){
            answer += " ";
            j++;
        }
        

        return answer;
    }
};