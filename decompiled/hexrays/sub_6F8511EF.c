void __cdecl sub_6F8511EF(int a1, int a2, int a3, const char *a4, const char *a5)
{
  int v5; // eax@21
  int v6; // eax@21
  unsigned int v7; // [sp+18h] [bp-10h]@13
  size_t v8; // [sp+18h] [bp-10h]@19
  unsigned int v9; // [sp+1Ch] [bp-Ch]@8
  size_t v10; // [sp+1Ch] [bp-Ch]@17

  if ( a1 && a2 )
  {
    if ( a3 != 1 && a3 != 2 )
      sub_6F839044(a1, (int)"Invalid sCAL unit");
    if ( !a4 || (v9 = strlen(a4)) == 0 || *a4 == 45 || !sub_6F837911((int)a4, v9) )
      sub_6F839044(a1, (int)"Invalid sCAL width");
    if ( !a5 || (v7 = strlen(a5)) == 0 || *a5 == 45 || !sub_6F837911((int)a5, v7) )
      sub_6F839044(a1, (int)"Invalid sCAL height");
    *(_BYTE *)(a2 + 252) = a3;
    v10 = v9 + 1;
    *(_DWORD *)(a2 + 256) = sub_6F83B561(a1, v10);
    if ( *(_DWORD *)(a2 + 256) )
    {
      memcpy(*(void **)(a2 + 256), a4, v10);
      v8 = v7 + 1;
      *(_DWORD *)(a2 + 260) = sub_6F83B561(a1, v8);
      if ( *(_DWORD *)(a2 + 260) )
      {
        memcpy(*(void **)(a2 + 260), a5, v8);
        v5 = *(_DWORD *)(a2 + 8);
        BYTE1(v5) |= 0x40u;
        *(_DWORD *)(a2 + 8) = v5;
        v6 = *(_DWORD *)(a2 + 232);
        BYTE1(v6) |= 1u;
        *(_DWORD *)(a2 + 232) = v6;
      }
      else
      {
        sub_6F83B5A7(a1, *(_DWORD *)(a2 + 256));
        *(_DWORD *)(a2 + 256) = 0;
        sub_6F839262(a1, "Memory allocation failed while processing sCAL");
      }
    }
    else
    {
      sub_6F839262(a1, "Memory allocation failed while processing sCAL");
    }
  }
}
