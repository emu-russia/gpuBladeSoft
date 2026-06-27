int __usercall sub_6F6A3F80@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // edi@1
  int v3; // ebp@1
  int v4; // ecx@1
  long double v5; // st7@1
  long double v6; // st6@1
  long double v7; // st7@1
  int result; // eax@2
  int v9; // eax@3

  v1 = (signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 4)) >> 5);
  v2 = (signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 6)) >> 5);
  v3 = v1 - (signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 8)) >> 5);
  v4 = v2 - (signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 10)) >> 5);
  v5 = sqrt((double)(v4 * v4 + v3 * v3));
  v6 = (double)(v3 * ((signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 2)) >> 5) - v2)
              - v4 * ((signed __int16)((signed __int16)(32 * *(_WORD *)a1) >> 5) - v1))
     / v5;
  v7 = (double)(v3 * ((signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 14)) >> 5) - v2)
              - v4 * ((signed __int16)((signed __int16)(32 * *(_WORD *)(a1 + 12)) >> 5) - v1))
     / v5;
  if ( v6 >= 0.00000011920929 || (result = 1, v7 >= 0.00000011920929) )
  {
    LOBYTE(v1) = v6 > -0.00000011920929;
    v9 = v7 <= -0.00000011920929;
    LOBYTE(v9) = v7 > -0.00000011920929;
    result = v1 & v9;
  }
  return result;
}
