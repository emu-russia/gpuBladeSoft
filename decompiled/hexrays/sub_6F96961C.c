signed int __usercall sub_6F96961C@<eax>(char a1@<al>)
{
  signed int result; // eax@2

  if ( (unsigned __int8)(a1 - 9) <= 1u )
    result = 1;
  else
    result = (unsigned __int8)(a1 - 12) <= 1u || (a1 & 0xDF) == 0;
  return result;
}
