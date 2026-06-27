int __usercall sub_6F86D854@<eax>(unsigned int a1@<eax>, char a2@<dl>)
{
  int v2; // ebx@1
  int result; // eax@2
  int v4; // edx@3
  int v5; // edi@8
  int i; // esi@9
  _BYTE *v7; // eax@13
  int v8; // eax@13
  _BYTE *v9; // eax@15
  int v10; // eax@15
  _BYTE *v11; // eax@17
  _BYTE *v12; // eax@17
  int v13; // edx@17
  int v14; // eax@19
  char v15; // [sp+Ch] [bp-1Ch]@1

  v2 = a1;
  v15 = a2;
  sub_6F86D5EC(a1);
  if ( *(_BYTE *)(v2 + 108) )
    goto LABEL_2;
  v5 = *(_DWORD *)(v2 + 16) + 7;
  if ( v5 > 7 )
  {
    for ( i = *(_DWORD *)(v2 + 12) | (127 << (24 - v5)); ; i <<= 8 )
    {
      v7 = *(_BYTE **)(v2 + 112);
      *v7 = i >> 16;
      *(_DWORD *)(v2 + 112) = v7 + 1;
      v8 = *(_DWORD *)(v2 + 116) - 1;
      *(_DWORD *)(v2 + 116) = v8;
      if ( v8 )
      {
        if ( ((i >> 16) & 0xFF) != 255 )
          goto LABEL_11;
      }
      else
      {
        sub_6F86CA70(v2);
        if ( ((i >> 16) & 0xFF) != 255 )
          goto LABEL_11;
      }
      v9 = *(_BYTE **)(v2 + 112);
      *v9 = 0;
      *(_DWORD *)(v2 + 112) = v9 + 1;
      v10 = *(_DWORD *)(v2 + 116) - 1;
      *(_DWORD *)(v2 + 116) = v10;
      if ( v10 )
      {
LABEL_11:
        v5 -= 8;
        if ( v5 <= 7 )
          break;
        continue;
      }
      sub_6F86CA70(v2);
      v5 -= 8;
      if ( v5 <= 7 )
        break;
    }
  }
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  v11 = *(_BYTE **)(v2 + 112);
  *v11 = -1;
  v12 = v11 + 1;
  *(_DWORD *)(v2 + 112) = v12;
  v13 = *(_DWORD *)(v2 + 116) - 1;
  *(_DWORD *)(v2 + 116) = v13;
  if ( !v13 )
  {
    sub_6F86CA70(v2);
    v12 = *(_BYTE **)(v2 + 112);
  }
  *v12 = v15 - 48;
  *(_DWORD *)(v2 + 112) = v12 + 1;
  v14 = *(_DWORD *)(v2 + 116) - 1;
  *(_DWORD *)(v2 + 116) = v14;
  if ( !v14 )
    sub_6F86CA70(v2);
LABEL_2:
  result = *(_DWORD *)(v2 + 120);
  if ( *(_DWORD *)(result + 344) )
  {
    *(_DWORD *)(v2 + 128) = 0;
    *(_DWORD *)(v2 + 132) = 0;
  }
  else
  {
    v4 = *(_DWORD *)(result + 272);
    if ( v4 > 0 )
    {
      result = 0;
      do
        *(_DWORD *)(v2 + 4 * result++ + 20) = 0;
      while ( result != v4 );
    }
  }
  return result;
}
