void sub_6F72F480(const char *a1, ...)
{
  void *v1; // eax@2
  void *v2; // ebx@2
  _DWORD *v3; // eax@3
  va_list va; // [sp+60h] [bp+8h]@1

  va_start(va, a1);
  if ( a1 )
  {
    v1 = malloc(0x118u);
    v2 = v1;
    if ( !v1 )
    {
      nullsub_10();
      exit(1);
    }
    *((_DWORD *)v1 + 2) = -1;
    *(float *)v1 = 0.0;
    *((float *)v1 + 1) = 0.0;
    *((double *)v1 + 2) = 2.5;
    j__vsnprintf((char *)v1 + 24, 0x100u, a1, va);
    v3 = sub_6F961B60(0xCu);
    v3[2] = v2;
    sub_6F9549A0((int)v3, (int)&dword_6FBBFDAC);
    ++dword_6FBBFDB4;
  }
}
