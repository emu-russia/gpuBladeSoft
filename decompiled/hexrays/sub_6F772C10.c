signed int __cdecl sub_6F772C10(int a1, const char *a2)
{
  signed int result; // eax@1
  FILE *v3; // esi@2
  __int32 v4; // eax@3

  result = 40;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = a2;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    v3 = fopen(a2, (const char *)&unk_6FB55858);
    result = 1;
    if ( v3 )
    {
      fseek(v3, 0, 2);
      v4 = ftell(v3);
      *(_DWORD *)(a1 + 4) = v4;
      if ( v4 )
      {
        fseek(v3, 0, 0);
        *(_DWORD *)(a1 + 12) = v3;
        *(_DWORD *)(a1 + 20) = sub_6F772B60;
        result = 0;
        *(_DWORD *)(a1 + 24) = sub_6F772B30;
      }
      else
      {
        fclose(v3);
        result = 81;
      }
    }
  }
  return result;
}
