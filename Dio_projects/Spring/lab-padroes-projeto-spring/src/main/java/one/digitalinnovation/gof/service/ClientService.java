package one.digitalinnovation.gof.service;

import one.digitalinnovation.gof.model.Client;

public interface ClientService {
    Iterable<Client> searchAll();
    Client searchById(Long id);
    void insert(Client client);
    void put(Long id, Client client) throws Exception;
    void delete(Long id);
}
