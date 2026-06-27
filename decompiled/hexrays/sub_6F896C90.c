signed int __usercall sub_6F896C90@<eax>(signed int result@<eax>, char *a2@<edx>, int a3@<ecx>)
{
  char *v3; // edi@2
  char *v4; // esi@2
  signed int v5; // ebx@2
  signed int v6; // ecx@3
  char v7; // dl@5
  int v8; // eax@6
  char v9; // ST1F_1@6

  if ( a3 )
  {
    v3 = &a2[a3];
    v4 = a2;
    v5 = result;
    result = *(_DWORD *)(result + 256);
    do
    {
      v7 = *v4;
      if ( result == 255 )
      {
        v8 = *(_DWORD *)(v5 + 268);
        *(_BYTE *)(v5 + 255) = 0;
        v9 = v7;
        (*(void (__cdecl **)(signed int, signed int, int))(v5 + 264))(v5, 255, v8);
        ++*(_DWORD *)(v5 + 296);
        result = 1;
        v6 = 0;
        v7 = v9;
      }
      else
      {
        v6 = result++;
      }
      ++v4;
      *(_DWORD *)(v5 + 256) = result;
      *(_BYTE *)(v5 + v6) = v7;
      *(_BYTE *)(v5 + 260) = v7;
    }
    while ( v4 != v3 );
  }
  return result;
}
