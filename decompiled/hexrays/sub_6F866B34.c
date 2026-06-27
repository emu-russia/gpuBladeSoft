int __cdecl sub_6F866B34(int a1)
{
  char v2; // [sp+18h] [bp-D0h]@1

  (*(void (__cdecl **)(int, char *))(*(_DWORD *)a1 + 12))(a1, &v2);
  return fprintf((FILE *)&iob + 2, (const char *)&unk_6FB9CA80, &v2);
}
