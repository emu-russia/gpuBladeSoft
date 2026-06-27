int __usercall sub_6F89FAB0@<eax>(int a1@<eax>, int a2@<edx>, _DWORD *a3@<ecx>)
{
  int v3; // ebx@1
  int v4; // ebx@4
  int v5; // eax@4
  int v6; // esi@4
  int v7; // eax@5
  _DWORD *v8; // ST1C_4@5
  int v9; // ST18_4@5
  int v10; // ecx@6
  int result; // eax@6
  int v12; // edx@6
  int v13; // eax@7

  v3 = *a3;
  if ( *a3 <= 1u || v3 == 48 || v3 == 6 )
  {
    result = sub_6F899DD0(a1, a2, (int)a3);
  }
  else
  {
    v4 = a1;
    v5 = *(_DWORD *)(a1 + 256);
    v6 = v5 + 1;
    if ( v5 == 255 )
    {
      v7 = *(_DWORD *)(v4 + 268);
      *(_BYTE *)(v4 + 255) = 0;
      v6 = 1;
      v8 = a3;
      v9 = a2;
      (*(void (__cdecl **)(int, signed int, int))(v4 + 264))(v4, 255, v7);
      a3 = v8;
      a2 = v9;
      v5 = 0;
      ++*(_DWORD *)(v4 + 296);
    }
    *(_DWORD *)(v4 + 256) = v6;
    *(_BYTE *)(v4 + v5) = 40;
    *(_BYTE *)(v4 + 260) = 40;
    sub_6F899DD0(v4, a2, (int)a3);
    result = *(_DWORD *)(v4 + 256);
    v12 = result + 1;
    if ( result == 255 )
    {
      v13 = *(_DWORD *)(v4 + 268);
      *(_BYTE *)(v4 + 255) = 0;
      (*(void (__fastcall **)(int, int))(v4 + 264))(v10, v12);
      ++*(_DWORD *)(v4 + 296);
      v12 = 1;
      result = 0;
    }
    *(_DWORD *)(v4 + 256) = v12;
    *(_BYTE *)(v4 + result) = 41;
    *(_BYTE *)(v4 + 260) = 41;
  }
  return result;
}
