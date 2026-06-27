int sub_6F8B7410(int a1, const char *a2, ...)
{
  va_list va; // [sp+28h] [bp+Ch]@1

  va_start(va, a2);
  return sub_6F8A7210(a1, (int)a2, (int)va);
}
