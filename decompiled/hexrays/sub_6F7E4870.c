signed int __usercall sub_6F7E4870@<eax>(_BYTE *a1@<eax>, _BYTE *a2@<edx>, unsigned int a3@<ecx>)
{
  int v3; // edi@1
  int i; // ecx@8
  int v5; // eax@10
  int v6; // eax@12
  int v8; // ebx@18
  char v9; // al@19
  char v10; // cl@20
  int v11; // esi@22
  bool v12; // cl@24
  unsigned int v13; // [sp+0h] [bp-24h]@1
  int v14; // [sp+8h] [bp-1Ch]@11
  _BYTE *v15; // [sp+Ch] [bp-18h]@5
  int v16; // [sp+10h] [bp-14h]@18

  v3 = 0;
  v13 = a3;
  if ( a1 && *a1 )
  {
    do
      ++v3;
    while ( a1[v3] );
  }
  if ( (unsigned int)a2 >= a3 )
    return 0;
  v15 = a1;
  while ( 1 )
  {
    if ( a2 )
    {
      if ( *a2 & 0xDF )
      {
        for ( i = 0; ; ++i )
        {
          v5 = i + 1;
          if ( !(a2[i + 1] & 0xDF) )
            break;
        }
        v14 = i;
        if ( v3 != v5 || !v15 )
          goto LABEL_12;
        if ( *v15 && *v15 == *a2 )
        {
          v8 = 0;
          v16 = i + 1;
          do
          {
            v11 = v8 + 1;
            if ( v14 == v8 )
              break;
            v9 = v15[v8 + 1];
            if ( !v9 )
              break;
            v10 = a2[v11];
            ++v8;
            if ( !v10 )
              break;
          }
          while ( v9 == v10 );
          v5 = v16;
        }
        else
        {
          v11 = 0;
        }
      }
      else
      {
        v5 = 0;
        if ( v3 )
          goto LABEL_12;
        if ( !v15 )
        {
          v5 = 0;
          goto LABEL_12;
        }
        v5 = 0;
        v11 = 0;
      }
      v12 = v5 == v11;
    }
    else
    {
      if ( v3 )
      {
        v6 = 1;
        goto LABEL_13;
      }
      v12 = v15 == 0;
      v5 = 0;
    }
    if ( v12 )
      return 1;
LABEL_12:
    v6 = v5 + 1;
LABEL_13:
    a2 += v6;
    if ( v13 <= (unsigned int)a2 )
      return 0;
  }
}
