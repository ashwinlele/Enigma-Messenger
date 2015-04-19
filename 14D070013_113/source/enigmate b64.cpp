#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

//we used the 'binary integers'(i.e. 0b as numeral literal)instead of decimal, hexadecimal
//for the bitwise and operations

string base64_encode(char*,int l);   //the basic functions for encryption and decryption
string base64_decode(string const& s);


string base64_chars ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
//the base 64 basic array


string base64_encode(char const* bytes_to_encode,int the_length)  //bytes to encode will be the string for encryption

{
  string ret;      //return string
  int i=0,j=0;
  char _input3[3];
  char _output4[4];

  while(the_length--)
  {
    _input3[i++]=*(bytes_to_encode++);
    //extracts 3 letters from the input string and runs the loop below
    //if length goes to 0 the it will run th if(i) loop

    if (i==3)
    {
      _output4[0]=(_input3[0] & 0b11111100) >> 2;
      _output4[1]=((_input3[0] & 0b00000011) << 4) + ((_input3[1] & 0b11110000) >> 4);
      _output4[2]=((_input3[1] & 0b00001111) << 2) + ((_input3[2] & 0b11000000) >> 6);
      _output4[3]=_input3[2] & 0b00111111;

      for(i=0;i<4;i++)
      {
        ret=ret+base64_chars[_output4[i]];
      }
      i=0;
    }
  }
//this loop is for the remaining letters of string
//we will add '=' here according to number of characters left
  if(i)
  {
    for(j=i;j<3;j++)
    {
        _input3[j]='\0';
    }
      _output4[0]=(_input3[0] & 0b11111100) >> 2;
      _output4[1]=((_input3[0] & 0b00000011) << 4) + ((_input3[1] & 0b11110000) >> 4);
      _output4[2]=((_input3[1] & 0b00001111) << 2) + ((_input3[2] & 0b11000000) >> 6);
      _output4[3]=_input3[2] & 0b00111111;

    for(j=0;(j<i+1);j++)
    {
        ret=ret+base64_chars[_output4[j]];
    }

    while((i++<3))
    {
      ret=ret+'=';
    }
  }
        return ret;
}

//same things just reversed
string base64_decode(string& encoded_string)
    {
        int i=0,j=0,k=0;
        char _input4[4],_output3[3];
        int the_length=encoded_string.length();
        string ret;

        while (the_length--&&(encoded_string[k]!='='))
        {
            _input4[i++]=encoded_string[k];
            k++;
            if(i==4)
                {
                    for(i=0;i<4;i++)
                    {
                        _input4[i]=base64_chars.find(_input4[i]);
                    }

                    _output3[0]=(_input4[0] << 2) + ((_input4[1] & 0b00110000) >> 4);
                    _output3[1]=((_input4[1] & 0b00001111) << 4) + ((_input4[2] & 0b00111100) >> 2);
                    _output3[2]=((_input4[2] & 0b00000011) << 6) + _input4[3];

                    for (i=0;(i<3);i++)
                    {
                        ret=ret+_output3[i];
                    }
                    i=0;
                }
        }

            if (i)
            {
                for(j=i;j<4;j++)
                {
                    _input4[j]=0;
                }

                for (j=0;j<4;j++)
                {
                    _input4[j]=base64_chars.find(_input4[j]);
                }

                _output3[0]=(_input4[0] << 2) + ((_input4[1] & 0b00110000) >> 4);
                _output3[1]=((_input4[1] & 0b00001111) << 4) + ((_input4[2] & 0b00111100) >> 2);
                _output3[2]=((_input4[2] & 0b00000011) << 6) + _input4[3];

                for(j=0;j<i-1;j++)
                {
                    ret=ret+_output3[j];
                }
            }

  return ret;
}


int main()
{
    ifstream infile("enigmate.txt");
    string message;
    infile>>message;

    string encoded = base64_encode(reinterpret_cast<const char*>(message.c_str()), message.length());
    //we googled this conversion of pointer expression :D
    //we dont know why const ptr should be used
    ofstream outfile("output.jpg");
    outfile<<encoded;
}
