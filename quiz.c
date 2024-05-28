#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void science ()
{
    printf("\n\n\tTopic : SCIENCE");
    char ans;int count=0;
  printf("\n\n1. Which among the following is the Major Component of the Gobar Gas ? \n");
  printf("\na.Butane\nb.Ethane\nc.Propane\nd.Methane");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n2. What Happens to The Orbital Velocity of the Satellite when the radius of the orbit is increased ?  \n");
  printf("\na.It decreases\nb.It increases\nc.It remains Same\nd.None");
  printf("\n\nEnter Answer option: ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n3. Which among the Following Relations Between Kinetic Energy (K.E.) and Potential Energy (P.E.) is true about Solids? \n ");
  printf("\na.K.E. = P.E.\nb.K.E. < P.E.\nc.K.E. > P.E.\nd.K.E. >> P.E.");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n4. What is the Order of distance for interatomic forces to be active ? \n");
  printf("\na. 10^(-7) meter\nb.10^(-8) meter\nc.10^(-9) meter\nd.10^(-10) meter");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

   printf("\n\n5.Which of the Following Compound is mainly used in Hand Sanitizer ?  \n");
  printf("\na.Aldehyde\nb.Acetic Acid\nc.Alcohol\nd.Ketone");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n6.Which of the Following Enzymes is not Present in the Human Stomach ? \n");
  printf("\na.Pepsin\nb.Hydrochloric Acid\nc.Mucus\nd.Trypsin");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n7. What is the Unit of Wavelength ?\n  ");
  printf("\na.Meter\nb.Hertz\nc.Diopter\nd.Faraday");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n8. What is the Colour of AgBr ?  \n");
  printf("\na.Blue\nb.Yellow\nc.Brown\nd.White");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n9. What is the Other Name of Newton's First Law of Motion ? \n");
  printf("\na.Action - Reaction\nb.Change in Momentum\nc.Law of Inertia\nd.Constant Momentum");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n10.How Many Carbon Atoms are Present in Heptane ?  \n");
  printf("\na.6\nb.8\nc.7\nd.5");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

printf("\n\nYour Total Score : %d",count);
if(count >=7 && count <=10)
printf("\nExcellent!!!\n\tTHANK YOU");
else if(count>=4 && count<=6)
printf("\nGood Job!! Keep it Up!! Can Improve!!\n\tTHANK YOU");
else 
printf("\nNeeds Very Much Improvement!! Can do better!!\n\tTHANK YOU");
}
void technology()
{
    printf("\n\n\tTopic : TECHNOLOGY");
    char ans;int count=0;
  printf("\n\n1. 'OS' computer abbreviation usually means ? \n");
  printf("\na.Order of Significance\nb.Open Software\nc.Operating System\nd.Optical Sensor");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n2.Made from a variety of materials, such as carbon, which inhibits the flow of current...?\n");
  printf("\na.Choke\nb.Resistor\nc.Inductor\nd.Capacitor");
  printf("\n\nEnter Answer option: ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n3.'DB' computer abbreviation usually means ? \n");
  printf("\na.Database\nb.Double Byte\nc.Data Block\nd.Driver Boot");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

 printf("\n\n4. In the United States the television broadcast standard is...?\n");
  printf("\na.PAL\nb.NTSC\nc.RGB\nd.SECAM");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

   printf("\n\n5. In what year was the @ chosen for its use in e-mail addresses ?\n");
  printf("\na.1976\nb.1980\nc.1984\nd.1972");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n6. What is the term to ask the computer to put information in order numerically or alphabetically?\n");
  printf("\na.Crop\nb.Report\nc.Sort\nd.Record");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n7. Blue is what number on the resistor color code?\n");
  printf("\na.1\nb.4\nc.2\nd.6");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n8. How many diodes are in a full wave bridge rectifier?\n");
  printf("\na.2\nb.4\nc.1\nd.3");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n9. In a Digital circuit, what is 1 'AND' 1?\n");
  printf("\na.1\nb.2\nc.0\nd.None ");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n10.Another word for 'Graphics for a word processor'?\n");
  printf("\na.Peripheral\nb.Clip Art\nc.Highlight\nd.Execute");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

printf("\n\nYour Total Score : %d",count);
if(count >=7 && count <=10)
printf("\nExcellent!!!\n\tTHANK YOU");
else if(count>=4 && count<=6)
printf("\nGood Job!! Keep it Up!! Can Improve!!\n\tTHANK YOU");
else 
printf("\nNeeds Very Much Improvement!! Can do better!!\n\tTHANK YOU");
}
void sports()
{
   printf("\n\n\tTopic : SPORTS");
   char ans;int count=0;
  printf("\n\n1. Who captained India to its first-ever Cricket World Cup victory in 1983? \t");
  printf("\na.Kapil Dev\nb.Sunil Gavaskar\nc.Sachin Tendulkar\nd.Sourav Ganguly");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n2.Which city hosted the iconic 2011 Cricket World Cup final between India and Sri Lanka?\n");
  printf("\na.Delhi\nb.Mumbai\nc.Ahmedabad\nd.Chennai");
  printf("\n\nEnter Answer option: ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n3.Who is the current president of the Board of Control for Cricket in India (BCCI)?\n");
  printf("\na.Sourav Ganguly\nb.Rahul Dravid\nc.Jay Shah\nd.Roger Binny");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

 printf("\n\n4. Since which of the following year Winter Olympics are held ?\n");
  printf("\na.1920\nb.1900\nc.1924\nd.1896");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

   printf("\n\n5. Three R of Football are famous in which country ?\n");
  printf("\na.Peru\nb.Mexico\nc.Brazil\nd.USA");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n6. Rovers Cup is related to which of the following sports?\n");
  printf("\na.Football\nb.Hockey\nc.Cricket\nd.Volleyball");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n7. In which year was the Olympic Symbol designed?\n");
  printf("\na.1915\nb.1912\nc.1925\nd.1940");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n8.Which are the fastest type of tennis courts?\n");
  printf("\na.Clay Court\nb.Crapet Court\nc.Hard Court\nd.Grass Court");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n9. How many games featured in the Hamilton Commonwealth Games?\n");
  printf("\na.6\nb.8\nc.9\nd.15 ");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n10.Which state of India houses the iconic Eden Gardens cricket ground?\n");
  printf("\na.Gujarat\nb.Madhya Pradesh\nc.West Bengal\nd.Punjab");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

printf("\n\nYour Total Score : %d",count);
if(count >=7 && count <=10)
printf("\nExcellent!!!\n\tTHANK YOU");
else if(count>=4 && count<=6)
printf("\nGood Job!! Keep it Up!! Can Improve!!\n\tTHANK YOU");
else 
printf("\nNeeds Very Much Improvement!! Can do better!!\n\tTHANK YOU");

}
void movies()
{
   printf("\n\n\tTopic : BOLLYWOOD");
    char ans;int count=0;
  printf("\n\n1. Who is known as the King of Bollywood?\n");
  printf("\na.Shah Rukh Khan\nb.Salman Khan\nc.Amitabh Bachchan\nd.Aamir Khan");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n2.Which Bollywood actor has won the maximum number of Filmfare Awards for Best Actor?\n");
  printf("\na.Dilip Kumar\nb. Amitabh Bachchan\nc.Rishi Kapoor\nd.Shah Rukh Khan");
  printf("\n\nEnter Answer option: ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n3.Which actress made her Bollywood debut with the film Dhadak?\n");
  printf("\na.Sara Ali Khan\nb.Ananya Pandey\nc.Jahnvi Kapoor\nd.Tara Sutaria");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

 printf("\n\n4.Which was the first Bollywood film to gross over Rs. 100 crore at the box office?\n");
  printf("\na.Dilwale Dulhaniya Le Jayenge\nb.Ghajini\nc.3 Idiots\nd.Krish 3");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

   printf("\n\n5.Which Bollywood actor has been declared as the National Icon of Election Commission of India (ECI) in 2022?\n");
  printf("\na.Pankaj Tripathi\nb.Rajkumar Rao\nc.Manoj Bajpayee\nd.Nawazuddin Siddiqui");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n6. In which year was Aishwarya Rai crowned Miss World?\n");
  printf("\na.1993\nb.1995\nc.1994\nd.1996");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n7. Which of the Following Bollywood Movie has won the OSCAR ?\n");
  printf("\na.Kuch Kuch Hota Hai\nb.Devdas\nc.Lajja\nd.Lagaan");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n8.Which of the following movies has became the first Bollywood film ever to release in Saudi Arabia?\n");
  printf("\na.Padman\nb.Gold\nc.Raazi\nd.Parmanu");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n9. How Many Films are Produced in India Every Year ?\n");
  printf("\na.1500-2000\nb.800-1000\nc.300-500\nd.100-200 ");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\nHow many cultures are represented by The South Indian film industry?\n");
  printf("\na.3\nb.4\nc.5\nd.7");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

printf("\n\nYour Total Score : %d",count);
if(count >=7 && count <=10)
printf("\nExcellent!!!\n\tTHANK YOU");
else if(count>=4 && count<=6)
printf("\nGood Job!! Keep it Up!! Can Improve!!\n\tTHANK YOU");
else 
printf("\nNeeds Very Much Improvement!! Can do better!!\n\tTHANK YOU");

}
void General_health()
{
   printf("\n\n\tTopic : GENERAL HEALTH");
   char ans;int count=0;
  printf("\n\n1. What does niacin deficiency cause ? \n");
  printf("\na.Acne\nb.Scurvy\nc.Boils\nd.Pellagra");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n2.What is the recommended daily water intake for adults?\n");
  printf("\na.2 cups\nb.4 cups\nc.8 cups\nd.12 cups");
  printf("\n\nEnter Answer option: ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n3.Which exercise is beneficial for cardiovascular health?\n ");
  printf("\na.Running\nb.Stretching\nc.Yoga\nd.Weightlifting");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

 printf("\n\n4. What is the recommended daily limit for added sugar intake?\n");
  printf("\na.10 grams\nb.50 grams\nc.100 grams\nd.25 grams");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

   printf("\n\n5. What is the recommended frequency for breast self-examination?\n");
  printf("\na.Quaterly\nb.Yearly\nc.Monthly\nd.Weekly");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n6. Which is the best source of Iron in the given options?\n");
  printf("\na.Green Vegetables\nb.Milk\nc.Carrot\nd.Eggs");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n7.Does saliva help in the digestion of which of the given options?\n");
  printf("\na.Proteins\nb.Starch\nc.Fibre\nd.None of these");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n8. Which of the following is a water-soluble vitamin?\n");
  printf("\na.Vitamin A\nb.Vitamin B\nc.Vitamin C\nd.Vitamin D");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n9. Which nutrient deficiency can lead to anemia?\n");
  printf("\na.Iron\nb.Calcium\nc.Vitamins\nd.Potassium ");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n10.What percentage of the human body is water?\n");
  printf("\na.75 percent\nb.80 percent\nc.55 percent\nd.66 percent");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

printf("\n\nYour Total Score : %d",count);
if(count >=7 && count <=10)
printf("\nExcellent!!!\n\tTHANK YOU");
else if(count>=4 && count<=6)
printf("\nGood Job!! Keep it Up!! Can Improve!!\n\tTHANK YOU");
else 
printf("\nNeeds Very Much Improvement!! Can do better!!\n\tTHANK YOU");

}
void geography()
{
    printf("\n\n\tTopic : GEOGRAPHY");
    char ans;int count=0;
  printf("\n\n1. Satmala Hills are located in which among the following states?\n ");
  printf("\na.Gujarat\nb.Madhya Prades\nc.Maharashtra\nd.Assam");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n2. What is the average height of the lesser Himalayas?  \n");
  printf("\na.1300-4600\nb.5000-6000\nc.6500-7000\nd.None of These");
  printf("\n\nEnter Answer option: ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n3. Which of the following state has the highest mangrove cover in India?  \n");
  printf("\na.Gujarat\nb.West Bengal\nc.Andhra Pradesh\nd.Tamil Nadu");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

 printf("\n\n4. The name of which of the following hill stations of Tamil Nadu means “The Gift of the Forest”?\n ");
  printf("\na.Ooty\nb.Kodaikanal\nc.Melagiri\nd.Kurangani");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

   printf("\n\n5. Which is the name of the longest river in Peninsular India?\n");
  printf("\na.Mahanadi\nb.Krishna\nc.Narmada\nd.Godavri");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n6. Yellow Revolution is associated with the production of which of the following?\n");
  printf("\na.Oil seeds\nb.Poultry\nc.Gold\nd.Sunflower");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n7. Which state is known as the Land of Five Rivers ?\n");
  printf("\na.Gujarat\nb.Haryana\nc.Bihar\nd.Punjab");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n8. What is the local name of the wind blowing in the northern plains during summers ?\n");
  printf("\na.Kaal Baisakhi\nb.Trade Winds\nc.Loo\nd.None of these");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n9. Which of the following is the oldest mountain range in India?\n");
  printf("\na.Western Ghats\nb.Aravali Mountains\nc.Himalayas\nd.Both A and C");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n10. Which of the following  is the highlights of the 'Rally for Valley' programme in India? \n ");
  printf("\na.Biodiversity\nb.Loss of Agriculture\nc.Environmental Degradation\nd.Resettlement of People");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

printf("\n\nYour Total Score : %d",count);
if(count >=7 && count <=10)
printf("\nExcellent!!!\n\tTHANK YOU");
else if(count>=4 && count<=6)
printf("\nGood Job!! Keep it Up!! Can Improve!!\n\tTHANK YOU");
else 
printf("\nNeeds Very Much Improvement!! Can do better!!\n\tTHANK YOU");
}
void festival()
{
  char ans;int count=0;
  printf("\n\n\tTopic : FESTIVALS OF INDIA");
  printf("\n\n1. Who of the following is credited with starting Ganesh Chaturthi as a public Festival ? \n");
  printf("\na.Dr.BR Ambedkar\nb.Gopal Krishna Gokhale\nc.Bal Gangadhar Tilak\nd.Jyotiba Phule");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n2. Which Festival occurs at a different time from the other three ? \n ");
  printf("\na.Sankranti\nb.Ugadi\nc.Lohri\nd.Pongal");
  printf("\n\nEnter Answer option: ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n3. Losoong Festival is celebrated in which of the following states ? \n ");
  printf("\na.Tibet\nb.Arunachal Pradesh\nc.Sikkim\nd.Kerala");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

 printf("\n\n4. Which of the Following is the monsoon Festival in India ? \n");
  printf("\na.Sankranti\nb.Teej\nc.Basant Panchami\nd.Baisakhi");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

   printf("\n\n5. Festival of Holi falls on :   \n");
  printf("\na.New Moon Day\nb.Full Moon Day\nc.One Day before Full Moon\nd.One day after New Moon");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n6. The International Kite Festival in Gujarat is held in the month of : \n");
  printf("\na.January\nb.March\nc.August\nd.November");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n7. For How Many days is Pongal Celebrated ? \n");
  printf("\na.7\nb.3\nc.1\nd.4");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n8. Name the Indian State where Onam is mostly celebrated \n");
  printf("\na.Andhra Pradesh\nb.Kerala\nc.Maharashtra\nd.Bihar");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n9. The beginning of the year in January marks the celebration of the sankranti or pongal festival.What does this festival celebrate ?\n");
  printf("\na.It celebrates the end of Autumn\nb.It celebrates a New Year\nc.It celebrates the beginning of spring\nd.It is a Harvest Festival");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n10. In which of the Following Festivals are the boat races a special feature ? \n ");
  printf("\na.Ranali Bihu\nb.Navratri\nc.Onam\nd.Pongal");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

printf("\n\nYour Total Score : %d",count);
if(count >=7 && count <=10)
printf("\nExcellent!!!\n\tTHANK YOU");
else if(count>=4 && count<=6)
printf("\nGood Job!! Keep it Up!! Can Improve!!\n\tTHANK YOU");
else 
printf("\nNeeds Very Much Improvement!! Can do better!!\n\tTHANK YOU");
}
void history()
{
   printf("\n\n\tTopic : HISTORY OF INDIA");
   char ans;int count=0;
  printf("\n\n1.In which of the following Vedas, the Priest is Brahma ? \n");
  printf("\na.Sam Veda\nb.Yajur Veda\nc.Rig Veda\nd.Atharva Veda");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

 printf("\n\n2. Which caves dating back to 600 A.D. are located on Gharapuri Island in Mumbai harbour? \n");
  printf("\na.Ajanta Caves\nb.Kanheri Caves\nc.Ellora Caves\nd.Elephanta Caves");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n3. The Phrase Satyamev Jayate is mentioned in Which of the following Upanishads ?  \n ");
  printf("\na.Chhandogya Upanishad\nb.Katho Upanishad\nc.Mandukyo Upanishad\nd.None of These");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n4.Who among the following leaders Joined Gandhiji in the Champaran Satyagraha held on April 10,1917 ? \n");
  printf("\na.Bal Gangadhar Tilak\nb.Subhash Chandra Bose\nc.Rajendra Prasad\nd.None of These");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n5. Upanishads are Books on : \n ");
  printf("\na.Politics\nb.Philosophy\nc.Medicine\nd.Social Life");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     case 'b' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : b");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n6. Where were the Hymns of Rig Veda Composed ? \n");
  printf("\na.Punjab\nb.Gujarat\nc.Rajasthan\nd.Uttar Pradesh");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n7. Dholavira is Situated on the Banks of the River...\n ");
  printf("\na.Indus\nb.Ravi\nc.Luni\nd.Ghaggar");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     case 'c' : printf("\nCorrect Answer");count++;break;
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : c");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n8.What were the Crops raised by Harappans ?\n");
  printf("\na.All the Mentioned\nb.Wheat\nc.Barley\nd.Cotton");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n9. Who is the author of Vikramakacharita ?\n");
  printf("\na.Ravi Kirti\nb.Mangalesa\nc.Bana\nd.Bilhana");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'a' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     case 'd' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : d");break;
     default : printf("\nInvalid Choice");
  }

  printf("\n\n10.Which is known as Book of Melody ?\n");
  printf("\na.Sam Veda\nb.Yajur Veda\nc.Rig Veda\nd.Atharva Veda");
  printf("\n\nEnter Answer Option : ");getchar();
  scanf("%c",&ans);
  switch(ans)
  {
     case 'd' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'b' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     case 'a' : printf("\nCorrect Answer");count++;break;
     case 'c' : printf("\nIncorrect Answer --> Correct Answer : a");break;
     default : printf("\nInvalid Choice");
  }
   printf("\n\nYour Total Score : %d",count);
   if(count >=7 && count <=10)
   printf("\nExcellent!!!\n\tTHANK YOU");
   else if(count>=4 && count<=6)
   printf("\nGood Job!! Keep it Up!! Can Improve!!\n\tTHANK YOU");
   else 
   printf("\nNeeds Very Much Improvement!! Can do better!!\n\tTHANK YOU");

}
void help()
{
 printf("\n\n\tHELP/GUIDE");
 printf("\nRULES : \n1.Enter Your Name.");
 printf("\n2.Enter the choice of your Favourite Topic according to list.");
 printf("\n3.Enter Respective Number choice according to topics mentioned in the list");
 printf("\n4.Each Topic Contains 10 Questions.");
 printf("\n5.For Each Correct Answer, +1 point will be counted and for each wrong Answer, 0 points will be counted ");
 printf("\n6.In each Wrong Answer,The correct Answer will be displayed for your knowledge");
 printf("\n7.At the end, your final score will be printed");
 printf("\n8.Enjoy the FUN GAME and test and improve your knowledge!!!");
}
int main()
{
  char name[50];
  printf("\n-----GENERAL KNOWLEDGE QUIZ-----");
  printf("\n\nEnter Name : ");
  scanf("%s",name);
  int choice;
  while(1)
  {
    printf("\n\nEnter : \n1.Help\n2.Science\n3.Technology\n4.Sports\n5.Bollywood\n6.General Health\n7.Geography\n8.Festivals of INDIA\n9.History of India\n0.Exit");
    printf("\nEnter your Choice/Topic : ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: help();break;
      case 2: science();break;
      case 3: technology();break;
      case 4: sports();break;
      case 5: movies();break;
      case 6: General_health();break;
      case 7: geography();break;
      case 8: festival();break;
      case 9: history();break;
      case 0: exit(0);break;
      default : printf("\nEnter Valid Choice");
    }
  }
}
