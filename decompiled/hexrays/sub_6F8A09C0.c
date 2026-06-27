unsigned int __usercall sub_6F8A09C0@<eax>(unsigned int result@<eax>)
{
  int v1; // esi@1
  int v2; // ebx@2
  int v3; // edx@2
  unsigned int v4; // ebx@6
  int v5; // edi@6
  int v6; // ebx@7
  int v7; // eax@7
  const void *v8; // eax@7
  void *v9; // eax@12
  SIZE_T v10; // edx@12
  int v11; // ebx@12
  DWORD v12; // eax@13
  void *v13; // [sp+14h] [bp-28h]@7
  SIZE_T v14; // [sp+20h] [bp-1Ch]@12
  unsigned int v15; // [sp+28h] [bp-14h]@8

  v1 = dword_70372B58;
  if ( dword_70372B58 <= 0 )
  {
    v1 = 0;
LABEL_6:
    v4 = result;
    v5 = sub_6F8A1130(result);
    if ( !v5 )
      sub_6F8A0960("Address %p has no image-section", v4);
    v6 = 20 * v1;
    v7 = 20 * v1 + dword_70372B5C;
    *(_DWORD *)(v7 + 16) = v5;
    *(_DWORD *)v7 = 0;
    v8 = (const void *)(*(_DWORD *)(v5 + 12) + sub_6F8A1240());
    *(_DWORD *)(dword_70372B5C + 20 * v1 + 12) = v8;
    if ( !VirtualQuery(v8, (PMEMORY_BASIC_INFORMATION)&v13, 0x1Cu) )
      sub_6F8A0960(
        "  VirtualQuery failed for %d bytes at address %p",
        *(_DWORD *)(v5 + 8),
        *(_DWORD *)(dword_70372B5C + v6 + 12));
    result = v15;
    if ( (v15 - 64) & 0xFFFFFFBF )
    {
      result = (v15 - 4) & 0xFFFFFFFB;
      if ( result )
      {
        v9 = v13;
        v10 = v14;
        v11 = dword_70372B5C + v6;
        *(_DWORD *)(v11 + 4) = v13;
        *(_DWORD *)(v11 + 8) = v10;
        result = VirtualProtect(v9, v10, 0x40u, (PDWORD)v11);
        if ( !result )
        {
          v12 = GetLastError();
          sub_6F8A0960("  VirtualProtect failed with code 0x%x", v12);
        }
      }
    }
    ++dword_70372B58;
  }
  else
  {
    v2 = 0;
    v3 = dword_70372B5C + 12;
    while ( *(_DWORD *)v3 > result || result >= *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) + *(_DWORD *)v3 )
    {
      ++v2;
      v3 += 20;
      if ( v2 == dword_70372B58 )
        goto LABEL_6;
    }
  }
  return result;
}
