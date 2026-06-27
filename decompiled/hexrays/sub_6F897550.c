int __usercall sub_6F897550@<eax>(int a1@<eax>)
{
  int v1; // ecx@1
  _BYTE *v2; // edx@2
  int v3; // esi@2
  char v4; // al@2
  int v5; // eax@4
  _BYTE *v6; // edi@6
  int v7; // edx@6
  char v8; // cl@6
  char *v9; // ebx@10
  char v10; // cl@12
  int v11; // ebx@13
  int v12; // ebp@14
  int v13; // ecx@15
  int result; // eax@18
  int v15; // edx@27

  v1 = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)v1 == 76 )
  {
    v2 = (_BYTE *)(v1 + 1);
    v3 = a1;
    *(_DWORD *)(a1 + 12) = v1 + 1;
    v4 = *(_BYTE *)(v1 + 1);
    if ( v4 == 95 || v4 == 90 )
    {
      if ( v4 == 95 )
      {
        v2 = (_BYTE *)(v1 + 2);
        *(_DWORD *)(v3 + 12) = v1 + 2;
        v1 = *(_BYTE *)(v1 + 2);
        if ( (_BYTE)v1 != 90 )
        {
          result = 0;
          goto LABEL_19;
        }
      }
      *(_DWORD *)(v3 + 12) = v2 + 1;
      result = sub_6F8996C0(v3, 0, v1);
      v2 = *(_BYTE **)(v3 + 12);
      if ( *v2 == 69 )
        goto LABEL_20;
    }
    else
    {
      v5 = sub_6F898420(v3);
      if ( v5 )
      {
        if ( *(_DWORD *)v5 == 39 )
        {
          v15 = *(_DWORD *)(v5 + 8);
          if ( *(_DWORD *)(v15 + 16) )
            *(_DWORD *)(v3 + 44) -= *(_DWORD *)(v15 + 4);
        }
        v6 = *(_BYTE **)(v3 + 12);
        v7 = 60;
        v8 = *v6;
        if ( *v6 == 110 )
        {
          *(_DWORD *)(v3 + 12) = v6 + 1;
          v8 = (v6++)[1];
          v7 = 61;
        }
        if ( v8 == 69 )
        {
          v11 = 0;
LABEL_14:
          v12 = *(_DWORD *)(v3 + 20);
          if ( v12 < *(_DWORD *)(v3 + 24)
            && (v13 = *(_DWORD *)(v3 + 16) + 16 * *(_DWORD *)(v3 + 20),
                *(_DWORD *)(v13 + 4) = 0,
                *(_DWORD *)(v3 + 20) = v12 + 1,
                v6)
            && v11 )
          {
            *(_DWORD *)(v13 + 4) = 0;
            *(_DWORD *)v13 = 0;
            *(_DWORD *)(v13 + 8) = v6;
            *(_DWORD *)(v13 + 12) = v11;
          }
          else
          {
            v13 = 0;
          }
          result = sub_6F896B60(v3, v7, v5, v13);
          v2 = *(_BYTE **)(v3 + 12);
          LOBYTE(v1) = *v2;
LABEL_19:
          if ( (_BYTE)v1 == 69 )
          {
LABEL_20:
            *(_DWORD *)(v3 + 12) = v2 + 1;
            return result;
          }
          return 0;
        }
        if ( v8 )
        {
          v9 = v6 + 1;
          while ( 1 )
          {
            *(_DWORD *)(v3 + 12) = v9;
            v10 = *v9;
            if ( *v9 == 69 )
              break;
            ++v9;
            if ( !v10 )
              return 0;
          }
          v11 = v9 - v6;
          goto LABEL_14;
        }
      }
    }
    return 0;
  }
  return 0;
}
