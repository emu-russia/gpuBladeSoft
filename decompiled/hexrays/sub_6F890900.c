signed int __cdecl sub_6F890900(int a1, unsigned int a2, int a3, signed int a4, int a5, unsigned int a6, _BYTE *a7, int a8)
{
  unsigned int v8; // edi@1
  signed int v9; // ecx@1
  int v10; // eax@5
  signed int v11; // edx@12
  int v12; // eax@21
  int v13; // ebx@21
  signed int v14; // edx@22
  int v15; // eax@22
  signed int v16; // ebp@22
  int v17; // eax@22
  int v18; // edx@22
  int v19; // ecx@22
  signed int result; // eax@26
  signed int v21; // [sp+18h] [bp-24h]@14
  signed int v22; // [sp+1Ch] [bp-20h]@21

  v8 = a2;
  v9 = a4;
  if ( a7 && *a7 == 49 && a8 == 56 )
  {
    if ( !a1 )
      goto LABEL_35;
    v10 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 24) = 0;
    if ( !v10 )
    {
      *(_DWORD *)(a1 + 32) = sub_6F892B00;
      *(_DWORD *)(a1 + 40) = 0;
    }
    if ( !*(_DWORD *)(a1 + 36) )
      *(_DWORD *)(a1 + 36) = sub_6F892B20;
    if ( a2 == -1 )
      v8 = 6;
    if ( a4 < 0 )
    {
      v9 = -a4;
      v11 = 0;
    }
    else
    {
      v11 = 1;
      if ( a4 > 15 )
      {
        v9 = a4 - 16;
        LOBYTE(v11) = 2;
      }
    }
    v21 = v11;
    if ( (unsigned int)(a5 - 1) <= 8 && a3 == 8 && (unsigned int)(v9 - 8) <= 7 && v8 <= 9 && a6 <= 4 )
    {
      if ( v9 == 8 )
        v9 = 9;
      v22 = v9;
      v12 = (*(int (__cdecl **)(_DWORD, signed int, signed int))(a1 + 32))(*(_DWORD *)(a1 + 40), 1, 5828);
      v13 = v12;
      if ( v12 )
      {
        *(_DWORD *)(a1 + 28) = v12;
        *(_DWORD *)v12 = a1;
        *(_DWORD *)(v12 + 24) = v21;
        *(_DWORD *)(v12 + 48) = v22;
        *(_DWORD *)(v12 + 28) = 0;
        *(_DWORD *)(v12 + 44) = 1 << v22;
        v14 = 1 << (a5 + 7);
        *(_DWORD *)(v12 + 52) = (1 << v22) - 1;
        *(_DWORD *)(v12 + 80) = a5 + 7;
        *(_DWORD *)(v12 + 76) = v14;
        *(_DWORD *)(v12 + 84) = v14 - 1;
        *(_DWORD *)(v12 + 88) = (a5 + 9) / 3u;
        *(_DWORD *)(v12 + 56) = (*(int (__cdecl **)(_DWORD, signed int, signed int))(a1 + 32))(
                                  *(_DWORD *)(a1 + 40),
                                  1 << v22,
                                  2);
        *(_DWORD *)(v13 + 64) = (*(int (__cdecl **)(_DWORD, _DWORD, signed int))(a1 + 32))(
                                  *(_DWORD *)(a1 + 40),
                                  *(_DWORD *)(v13 + 44),
                                  2);
        v15 = (*(int (__cdecl **)(_DWORD, _DWORD, signed int))(a1 + 32))(*(_DWORD *)(a1 + 40), *(_DWORD *)(v13 + 76), 2);
        v16 = 1 << (a5 + 6);
        *(_DWORD *)(v13 + 5824) = 0;
        *(_DWORD *)(v13 + 5788) = v16;
        *(_DWORD *)(v13 + 68) = v15;
        v17 = (*(int (__cdecl **)(_DWORD, signed int, signed int))(a1 + 32))(*(_DWORD *)(a1 + 40), v16, 4);
        v18 = *(_DWORD *)(v13 + 5788);
        *(_DWORD *)(v13 + 12) = 4 * v18;
        v19 = *(_DWORD *)(v13 + 56);
        *(_DWORD *)(v13 + 8) = v17;
        if ( v19 && *(_DWORD *)(v13 + 64) && *(_DWORD *)(v13 + 68) && v17 )
        {
          *(_DWORD *)(v13 + 5784) = 3 * v18 + v17;
          *(_DWORD *)(v13 + 5796) = v17 + (v18 & 0xFFFFFFFE);
          *(_DWORD *)(v13 + 132) = v8;
          *(_BYTE *)(v13 + 36) = 8;
          *(_DWORD *)(v13 + 136) = a6;
          result = sub_6F88F350(a1);
        }
        else
        {
          *(_DWORD *)(v13 + 4) = 666;
          *(_DWORD *)(a1 + 24) = "insufficient memory";
          sub_6F890800(a1);
          result = -4;
        }
      }
      else
      {
        result = -4;
      }
    }
    else
    {
LABEL_35:
      result = -2;
    }
  }
  else
  {
    result = -6;
  }
  return result;
}
