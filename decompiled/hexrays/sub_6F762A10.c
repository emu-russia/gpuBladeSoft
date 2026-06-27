int __cdecl sub_6F762A10(int a1)
{
  int result; // eax@1
  int v2; // [sp+8h] [bp-128h]@0
  int v3; // [sp+Ch] [bp-124h]@0

  result = dword_7036E7C4[50 * a1];
  if ( result )
  {
    (*(void (__stdcall **)(int, int, int))(*(_DWORD *)result + 100))(dword_7036E7C4[50 * a1], v2, v3);
    result = (*(int (__stdcall **)(int))(*(_DWORD *)dword_7036E700[50 * a1 + 49] + 36))(dword_7036E700[50 * a1 + 49]);
  }
  return result;
}
