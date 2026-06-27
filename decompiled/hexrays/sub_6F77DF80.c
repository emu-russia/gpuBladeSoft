signed int __cdecl sub_6F77DF80(int a1)
{
  signed int result; // eax@1
  int v2; // eax@2
  int v3; // esi@2
  signed int v4; // edx@2
  unsigned int v5; // ebp@3
  int v6; // ecx@5
  unsigned int v7; // edi@6
  signed int v8; // edx@9
  unsigned int v9; // edi@10
  int v10; // eax@12
  unsigned int v11; // ecx@13
  signed int v12; // edx@16
  unsigned int v13; // ecx@17
  signed int v14; // eax@19
  unsigned int v15; // ebx@20
  int v16; // edx@25
  int v17; // edx@27
  signed int v18; // eax@43
  signed int v19; // eax@44

  result = 161;
  if ( *(_DWORD *)(a1 + 404) >= (unsigned int)(a1 + 28) )
  {
    v2 = *(_DWORD *)(a1 + 16);
    v3 = *(_DWORD *)(a1 + 412);
    v4 = *(_BYTE *)v2;
    if ( (_BYTE)v4 == 30 )
    {
      v19 = sub_6F77A6B0((_BYTE *)v2, *(_DWORD *)(a1 + 20), 0, 0);
      v5 = *(_DWORD *)(a1 + 20);
      v6 = v19 >> 16;
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 20);
      if ( v4 == 28 )
      {
        v6 = 0;
        if ( v5 >= v2 + 3 )
          v6 = (signed __int16)_byteswap_ushort(*(_WORD *)(v2 + 1));
      }
      else if ( v4 == 29 )
      {
        v6 = 0;
        if ( v5 >= v2 + 5 )
          v6 = _byteswap_ulong(*(_DWORD *)(v2 + 1));
      }
      else
      {
        v6 = v4 - 139;
        if ( v4 > 246 )
        {
          v6 = 0;
          v7 = v2 + 2;
          if ( v4 > 250 )
          {
            if ( v5 >= v7 )
              v6 = ((251 - v4) << 8) - *(_BYTE *)(v2 + 1) - 108;
          }
          else if ( v5 >= v7 )
          {
            v6 = ((v4 - 247) << 8) + *(_BYTE *)(v2 + 1) + 108;
          }
        }
      }
    }
    *(_DWORD *)(v3 + 132) = v6;
    v8 = *(_BYTE *)v5;
    if ( (_BYTE)v8 == 30 )
    {
      v18 = sub_6F77A6B0((_BYTE *)v5, *(_DWORD *)(a1 + 24), 0, 0);
      v9 = *(_DWORD *)(a1 + 24);
      v10 = v18 >> 16;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 24);
      if ( v8 == 28 )
      {
        v10 = 0;
        if ( v9 >= v5 + 3 )
        {
          v17 = *(_BYTE *)(v5 + 2);
          v10 = (signed __int16)_byteswap_ushort(*(_WORD *)(v5 + 1));
        }
      }
      else if ( v8 == 29 )
      {
        v10 = 0;
        if ( v9 >= v5 + 5 )
          v10 = _byteswap_ulong(*(_DWORD *)(v5 + 1));
      }
      else
      {
        v10 = v8 - 139;
        if ( v8 > 246 )
        {
          v10 = 0;
          v11 = v5 + 2;
          if ( v8 > 250 )
          {
            if ( v9 >= v11 )
              v10 = ((251 - v8) << 8) - *(_BYTE *)(v5 + 1) - 108;
          }
          else if ( v9 >= v11 )
          {
            v10 = ((v8 - 247) << 8) + *(_BYTE *)(v5 + 1) + 108;
          }
        }
      }
    }
    *(_DWORD *)(v3 + 136) = v10;
    v12 = *(_BYTE *)v9;
    if ( (_BYTE)v12 == 30 )
    {
      v14 = (signed int)sub_6F77A6B0((_BYTE *)v9, *(_DWORD *)(a1 + 28), 0, 0) >> 16;
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 28);
      if ( v12 == 28 )
      {
        v14 = 0;
        if ( v13 >= v9 + 3 )
        {
          v16 = *(_BYTE *)(v9 + 2);
          v14 = (signed __int16)_byteswap_ushort(*(_WORD *)(v9 + 1));
        }
      }
      else if ( v12 == 29 )
      {
        v14 = 0;
        if ( v13 >= v9 + 5 )
          v14 = _byteswap_ulong(*(_DWORD *)(v9 + 1));
      }
      else
      {
        v14 = v12 - 139;
        if ( v12 > 246 )
        {
          v14 = 0;
          v15 = v9 + 2;
          if ( v12 > 250 )
          {
            if ( v13 >= v15 )
              v14 = ((251 - v12) << 8) - *(_BYTE *)(v9 + 1) - 108;
          }
          else if ( v13 >= v15 )
          {
            v14 = ((v12 - 247) << 8) + *(_BYTE *)(v9 + 1) + 108;
          }
        }
      }
    }
    *(_DWORD *)(v3 + 140) = v14;
    result = 0;
  }
  return result;
}
