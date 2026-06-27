int sub_6F8B7440(int a1, int a2, const char *a3, ...)
{
  va_list va; // [sp+2Ch] [bp+10h]@1

  va_start(va, a3);
  return sub_6F8A7190(a1, a2, (int)a3, (int)va);
}
