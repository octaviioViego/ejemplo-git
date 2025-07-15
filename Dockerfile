FROM gcc:latest AS build

WORKDIR /App

COPY . .

RUN gcc holaMundo.c -o holaMundo -static

FROM scratch

COPY --from=build /App/holaMundo .

CMD [ "./holaMundo" ]