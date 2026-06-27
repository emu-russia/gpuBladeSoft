signed int __usercall sub_6F90E260@<eax>(int *a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, char a4, int a5)
{
  unsigned int v5; // edi@1
  int *v6; // esi@1
  int v7; // ebx@1
  unsigned int v8; // ecx@3
  int *v9; // eax@3
  signed int result; // eax@4
  int v11; // edi@3
  unsigned int v12; // esi@3
  int *v13; // ebx@3
  int i; // eax@3
  int v15; // eax@7
  signed int v16; // ebp@8
  unsigned int v17; // edx@8

  v5 = a3;
  v6 = a1;
  v7 = a2;
  if ( a4 & 2 && !(unsigned __int8)sub_6F90DA30(a2) )
  {
    result = 1;
  }
  else
  {
    v8 = v5;
    v9 = v6;
    v11 = v7;
    v12 = v8;
    v13 = v9;
    for ( i = *v9; ; *v13 = i )
    {
      if ( v13[1] == i )
        return 0;
      v17 = *(_WORD *)i;
      if ( v17 - 55296 <= 0x3FF )
      {
        if ( a5 == 1 )
          return 2;
        if ( (unsigned int)((v13[1] - i) >> 1) <= 1 )
          return 0;
        v15 = *(_WORD *)(i + 2);
        if ( (unsigned int)(v15 - 56320) > 0x3FF )
          return 2;
        v16 = 2;
        v17 = v15 + (v17 << 10) - 56613888;
        if ( v17 > v12 )
          return 2;
      }
      else
      {
        if ( v17 - 56320 <= 0x3FF )
          return 2;
        v16 = 1;
        if ( v17 > v12 )
          return 2;
      }
      if ( !(unsigned __int8)sub_6F90DD30(v11, v17) )
        break;
      i = *v13 + 2 * v16;
    }
    result = 1;
  }
  return result;
}
