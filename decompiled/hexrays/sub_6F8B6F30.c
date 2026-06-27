int (__cdecl *__cdecl sub_6F8B6F30(int a1, int a2, double a3, double a4, double a5))(_DWORD)
{
  int (__cdecl *result)(_DWORD); // eax@1
  int v6; // [sp+10h] [bp-2Ch]@2
  int v7; // [sp+14h] [bp-28h]@2
  double v8; // [sp+18h] [bp-24h]@2
  double v9; // [sp+20h] [bp-1Ch]@2
  double v10; // [sp+28h] [bp-14h]@2

  result = dword_70373590;
  if ( dword_70373590 )
  {
    v8 = a3;
    v9 = a4;
    v6 = a1;
    v10 = a5;
    v7 = a2;
    result = (int (__cdecl *)(_DWORD))dword_70373590(&v6);
  }
  return result;
}
