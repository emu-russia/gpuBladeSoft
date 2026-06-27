void __cdecl sub_6F850E8C(int a1, int a2, const char *a3, int a4, int a5, signed int a6, signed int a7, const char *a8, int a9)
{
  unsigned int v9; // eax@16
  void **v10; // ebx@27
  int v11; // eax@31
  int v12; // eax@31
  size_t v13; // [sp+18h] [bp-10h]@8
  size_t v14; // [sp+18h] [bp-10h]@22
  size_t v15; // [sp+18h] [bp-10h]@27
  signed int i; // [sp+1Ch] [bp-Ch]@14
  signed int j; // [sp+1Ch] [bp-Ch]@26

  if ( a1 && a2 && a3 && a8 && (a7 <= 0 || a9) )
  {
    v13 = strlen(a3) + 1;
    if ( a6 < 0 || a6 > 3 )
      sub_6F839044(a1, (int)"Invalid pCAL equation type");
    if ( a7 < 0 || a7 > 255 )
      sub_6F839044(a1, (int)"Invalid pCAL parameter count");
    for ( i = 0; i < a7; ++i )
    {
      if ( *(_DWORD *)(4 * i + a9) )
      {
        v9 = strlen(*(const char **)(4 * i + a9));
        if ( sub_6F837911(*(_DWORD *)(4 * i + a9), v9) )
          continue;
      }
      sub_6F839044(a1, (int)"Invalid format for pCAL parameter");
    }
    *(_DWORD *)(a2 + 208) = sub_6F83B561(a1, v13);
    if ( *(_DWORD *)(a2 + 208) )
    {
      memcpy(*(void **)(a2 + 208), a3, v13);
      *(_DWORD *)(a2 + 212) = a4;
      *(_DWORD *)(a2 + 216) = a5;
      *(_BYTE *)(a2 + 228) = a6;
      *(_BYTE *)(a2 + 229) = a7;
      v14 = strlen(a8) + 1;
      *(_DWORD *)(a2 + 220) = sub_6F83B561(a1, v14);
      if ( *(_DWORD *)(a2 + 220) )
      {
        memcpy(*(void **)(a2 + 220), a8, v14);
        *(_DWORD *)(a2 + 224) = sub_6F83B561(a1, 4 * (a7 + 1));
        if ( *(_DWORD *)(a2 + 224) )
        {
          memset(*(void **)(a2 + 224), 0, 4 * (a7 + 1));
          for ( j = 0; j < a7; ++j )
          {
            v15 = strlen(*(const char **)(4 * j + a9)) + 1;
            v10 = (void **)(*(_DWORD *)(a2 + 224) + 4 * j);
            *v10 = sub_6F83B561(a1, v15);
            if ( !*(_DWORD *)(4 * j + *(_DWORD *)(a2 + 224)) )
            {
              sub_6F839262(a1, "Insufficient memory for pCAL parameter");
              return;
            }
            memcpy(*(void **)(4 * j + *(_DWORD *)(a2 + 224)), *(const void **)(4 * j + a9), v15);
          }
          v11 = *(_DWORD *)(a2 + 8);
          BYTE1(v11) |= 4u;
          *(_DWORD *)(a2 + 8) = v11;
          v12 = *(_DWORD *)(a2 + 232);
          LOBYTE(v12) = v12 | 0x80;
          *(_DWORD *)(a2 + 232) = v12;
        }
        else
        {
          sub_6F839262(a1, "Insufficient memory for pCAL params");
        }
      }
      else
      {
        sub_6F839262(a1, "Insufficient memory for pCAL units");
      }
    }
    else
    {
      sub_6F839262(a1, "Insufficient memory for pCAL purpose");
    }
  }
}
