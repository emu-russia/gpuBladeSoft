_BYTE *__usercall sub_6F792C60@<eax>(int a1@<eax>, _DWORD *a2@<edx>)
{
  int v2; // edi@1
  unsigned int v3; // esi@1
  _BYTE *v4; // ecx@1
  _BYTE *result; // eax@5
  int v6; // eax@7
  int v7; // eax@14
  int v8; // eax@18
  int v9; // ebx@35
  int v10; // ecx@39
  bool v11; // zf@44

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(v2 + 8);
  v4 = *(_BYTE **)v2;
  if ( *(_DWORD *)(v2 + 12) <= 1 )
  {
    if ( *(_DWORD *)(v2 + 12) != 1 )
    {
      do
      {
        if ( (unsigned int)v4 >= v3 )
        {
          v4 = *(_BYTE **)v2;
          goto LABEL_2;
        }
        *(_DWORD *)v2 = ++v4;
        v8 = *(v4 - 1);
      }
      while ( v8 == 32 || v8 == 9 );
      if ( v8 == 13 || v8 == 10 )
        goto LABEL_2;
      if ( v8 == 59 )
      {
        *(_DWORD *)(v2 + 12) = 1;
      }
      else if ( v8 == 26 )
      {
        v4 = *(_BYTE **)v2;
        goto LABEL_2;
      }
    }
    do
    {
      if ( (unsigned int)v4 >= v3 )
        break;
      *(_DWORD *)v2 = ++v4;
      v7 = *(v4 - 1);
      if ( v7 == 13 )
        break;
    }
    while ( v7 != 10 && v7 != 26 );
  }
LABEL_2:
  while ( 2 )
  {
    while ( 1 )
    {
      *(_DWORD *)(v2 + 12) = 0;
      do
      {
        if ( v3 <= (unsigned int)v4 )
          goto LABEL_4;
        *(_DWORD *)v2 = ++v4;
        v6 = *(v4 - 1);
      }
      while ( v6 == 32 || v6 == 9 );
      if ( v6 != 13 && v6 != 10 )
        break;
      *(_DWORD *)(v2 + 12) = 2;
    }
    if ( v6 == 59 )
    {
      *(_DWORD *)(v2 + 12) = 1;
LABEL_5:
      result = 0;
      if ( a2 )
        *a2 = 0;
      return result;
    }
    if ( v6 == 26 )
    {
LABEL_4:
      *(_DWORD *)(v2 + 12) = 3;
      goto LABEL_5;
    }
    result = v4 - 1;
    while ( 1 )
    {
      if ( v3 <= (unsigned int)v4 )
      {
LABEL_35:
        *(_DWORD *)(v2 + 12) = 3;
        v9 = (int)v4;
        goto LABEL_36;
      }
      v9 = (int)(v4 + 1);
      *(_DWORD *)v2 = v4 + 1;
      v10 = *v4;
      if ( v10 == 32 || v10 == 9 )
        goto LABEL_36;
      if ( v10 == 13 || v10 == 10 )
        break;
      if ( v10 == 59 )
      {
        *(_DWORD *)(v2 + 12) = 1;
LABEL_36:
        if ( !result )
          goto LABEL_5;
        goto LABEL_37;
      }
      v11 = v10 == 26;
      v4 = (_BYTE *)v9;
      if ( v11 )
        goto LABEL_35;
    }
    *(_DWORD *)(v2 + 12) = 2;
    if ( !result )
    {
      v4 = (_BYTE *)v9;
      continue;
    }
    break;
  }
LABEL_37:
  if ( a2 )
    *a2 = v9 - (_DWORD)result - 1;
  return result;
}
