const char *__cdecl sub_6F77B350(int a1, const char *a2)
{
  const char *result; // eax@1
  int v3; // eax@4
  int v4; // eax@5

  result = sub_6F7690C0((const char **)off_6FB57600, a2);
  if ( !result )
  {
    if ( a1 && (v3 = *(_DWORD *)(a1 + 4)) != 0 && (v4 = sub_6F76F030(v3, "sfnt")) != 0 )
      result = (const char *)(*(int (__cdecl **)(int, const char *))(*(_DWORD *)v4 + 32))(v4, a2);
    else
      result = 0;
  }
  return result;
}
